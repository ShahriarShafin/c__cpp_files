#include <stdio.h>


struct node
{
    int data;
    struct node *next;
};

struct node *head;

void init()
{
    head=NULL;
}

void insertItem(int value)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->next=head;
    head=temp;
}

void print()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

struct node* search(int val)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            return temp;
        }
        temp=temp->next;
    }
    return 0;
}

void removeItem(int val)
{
    struct node *temp=head;
    struct node *prev=0;
    while(temp!=0)
    {
        if(temp->data==val)
            break;
        prev=temp;
        temp=temp->next;
    }
    if(temp==0)
        return;
    else if(temp==head)
    {
        head=head->next;
        free(temp);
    }
    else
    {
        prev->next=temp->next;
        free(temp);
    }
}

//// Complete the following functions and also add them in main function

void deleteFirst() // The function will delete the first item of the list
{
    if(head != NULL)
    {
        head=head->next;
    }
    else
    {
        printf("The list is Empty!\n");
    }


}
void deleteLast() // The function will delete the last item of the list
{

    struct node *temp;
    temp=head;
    struct node *last;
    while(temp->next != NULL)
    {
        last=temp;
        temp=temp->next;
    }

    last->next=NULL;


}


void insertLast(int data) // The function will insert the value at the end of the list
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = NULL;
    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;


}



struct node* findLargest() // The function will find the largest item of the list and return it
{
    struct node *temp,*large1;
    temp=head;
    int large = 0;


    while (temp != NULL)
    {

        if (large < temp->data)
        {
            large = temp->data;
            large1 = temp;
        }

        temp = temp->next;
    }
return large1;

//printf("%d\n",large);

}

struct node* findMiddle() /*The function will return the middle element of the list. If the list has 6 elements,
                          it will return the 3rd element. If the list has 7 elements, it will also return the 3rd element.
                          */
{

    int sum1=0,sum2=0;
    int i,j;
    struct node *temp=head;
    struct node *temp1=head;

    for(i=0; i<temp!=NULL; i++)
    {
        sum1=sum1+1;
        temp=temp->next;
    }
    sum2=sum1/2;
    // printf("Middle  is %d\n",sum2);


    for(j=1; j<sum2; j++)
    {
        // printf("gotcha!\n");


        temp1=temp1->next;
    }

    printf("Middle element is: %d\n ",temp1->data);


}


int main()
{
    init();
    int op;
    printf("1.Insert new Item\n");
    printf("2.Print Items\n");
    printf("3.Search Item\n");
    printf("4.Remove Item\n");
    printf("5.Delete First Item\n");
    printf("6.Delete Last Item\n");
    printf("7.Find Largest Item\n");
    printf("8.Insert in Last\n");
    printf("9.Find Middle Item\n");
    while(1)
    {
        scanf("%d",&op);
        if(op==1)
        {
            int val;
            scanf("%d",&val);
            insertItem(val);
        }
        else if(op==2)
        {
            print();
        }
        else if(op==3)
        {
            int val;
            scanf("%d",&val);
            struct node *temp=search(val);
            if(temp==0)
                printf("Not found.\n");
            else
                printf("Found.\n");
        }
        else if(op==4)
        {
            int val;
            scanf("%d",&val);
            removeItem(val);
        }
        else if(op==5)
        {
            deleteFirst();
        }
        else if(op==6)
        {
            deleteLast();
        }
        else if(op==7)
        {
            struct node *large1= findLargest();
            printf("%d\n",large1->data);
        }
        else if(op==8)
        {
            int item;
            scanf("%d",&item);
            insertLast(item);
        }
        else if(op==9)
        {
            findMiddle();
        }
    }
}
