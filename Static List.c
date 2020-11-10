#include<stdio.h>
#include<stdlib.h>
#define NULL_VALUE -99999
#define SUCCESS_VALUE 99999
#define maxSize 1000
int list[maxSize];
int length;
void initializeList()
{
    length = 0 ;
}

int getLength()
{
    int i;
    for(i=0; i<length; i++)
    {
    }
    printf("\nThere are '%d' items in the List.",i);
    printf("\n");

    return length;

}

int deleteLast()
{
    length--;
    return length;

}


int searchItem(int item)
{
    int i = 0;
    for (i = 0; i < length; i++)
    {
        if( list[i] == item )
            return i;
    }
    return NULL_VALUE;
}
int insertItem(int newitem)
{
    if (length == maxSize)
    {
        return NULL_VALUE;
    };
    list[length] = newitem ; //store new item
    length++ ;
    return SUCCESS_VALUE ;
}
int deleteItemAt(int position) //do not preserve order of items
{
    if ( position<0 || position >= length )
        return NULL_VALUE;
    list[position] = list[length-1] ;
    length-- ;
    return SUCCESS_VALUE ;
}

int alterItem(int position, int newValue)
{
    if ( position<0 || position >= length )
        return NULL_VALUE;
    list[position] = newValue;
    return length;
    return SUCCESS_VALUE ;



}

int deleteItemOrdered(int position)
{
    int i;
    if(position<0|| position>length)
    {
        return NULL_VALUE;
    }
    for(i=position; i<length; i++)
    {
        list[i]=list[i+1];

    }
    length--;

}

int insertItemAt(int position,int item)
{
    int i;
    for(i=length; i>position; i--)
    {
        list[i]=list[i-1];

    }
    list[position]=item;
    length++;
    return SUCCESS_VALUE;
}

int deleteItem(int item)
{
    int position;
    position = searchItem(item) ;
    if ( position == NULL_VALUE )
        return NULL_VALUE;
    deleteItemAt(position) ;
    return SUCCESS_VALUE ;
}
void printList()
{
    int i;
    printf("\nThe Items are: ");
    for(i=0; i<length; i++)
        printf("%d ", list[i]);

    printf("\n");
}
int main(void)
{
    initializeList();
    printf("                        S t a t i c    L i s t "            );
    printf("\n\n");
    printf("               1. Insert new Item.\t  6. Length of List.\n");
    printf("               2. Delete Item at. \t  7. Delete last. \n");
    printf("               3. Delete Item.    \t  8. Alter Item.\n");
    printf("               4. Delete & Ordered\t  9. Insert Item at.  \n");
    printf("               5. Print.          \t  10. exit.                    ");
    while(1)
    {
        int ch;
        printf("\nEnter a number: ");
        scanf("%d",&ch);
        if(ch==1)
        {
            int item;
            scanf("%d", &item);
            insertItem(item);

        }
        else if(ch==2)
        {
            int pos;
            scanf("%d", &pos);
            deleteItemAt(pos);
        }
        else if(ch==4)
        {
            int position;
            printf("Position: ");
            scanf("%d",&position);
            deleteItemOrdered(position);
        }
        else if(ch==3)
        {
            int item;
            scanf("%d", &item);
            deleteItem(item);
        }
        else if(ch==5)
        {
            printList();
        }
        else if (ch==6)
        {

            getLength();

        }

        else if(ch==7)
        {
            deleteLast();
        }
        else if(ch==8)
        {
            int poss,newValue;
            printf("Position: ");
            scanf("%d", &poss);
            printf("Value: ");
            scanf("%d",&newValue);
            alterItem(poss,newValue);
        }
        else if(ch==9)
        {
            int position,item;

            printf("Position: ");
            scanf("%d",&position);
            printf("Item: ");
            scanf("%d",&item);
            insertItemAt(position,item);


        }

        else if(ch==10)
        {
            break;
        }
    }
}
