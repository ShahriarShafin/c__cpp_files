#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;
struct node *tail;

void init()
{
    head=0;
    tail=0;
}

void insert(int val)
{
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->prev=0;

    newNode->next=head;
    if(head!=0)
        head->prev=newNode;
    else
        tail=newNode;
    head=newNode;
}

void insertLast(int val)
{
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=0;

    newNode->prev=tail;
    if(head!=0)
        tail->next=newNode;
    else
        head=newNode;
    tail=newNode;
}

void print()
{
    struct node *temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}



//// Complete the following functions and also add them in main function

int length()//The function will return the length of the list
{
    int sum=0;
    struct node *temp=head;
    for(int i=0; i<temp!=0; i++)
    {
        sum=sum+1;
        temp=temp->next;
    }

    printf("The length is %d\n",sum);

}

struct node* search(int value) // The function will search the value from the list and return it
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==value)
        {
            printf("Found!\n");
        }
        temp=temp->next;

    }

}
void deleteFirst() // The function will delete the last item of the list
{
    struct node *temp=head;

    head = head -> next;


}

void insertLaSt(int value) // The function will insert the value at the end of the list
{
 struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = value;
    newNode->next = NULL;
    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void deleteItem(int value) // The function will delete the value from the list, if the value exists in the list
{
      struct node *temp=head;
    struct node *prev=0;
    while(temp!=0)
    {
        if(temp->data==value)
            break;
        prev=temp;
        temp=temp->next;
    }                                       //hyni
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



int main()
{
    init();
    int op;
    printf("1.insert\n");
    printf("2.insertLast\n");
    printf("3.print\n");
    printf("4.deleteFirst\n");
    printf("5.Get Length\n");
    printf("6.Search\n");
    printf("7.Insert Last\n");
    while(1)
    {
        scanf("%d",&op);
        if(op==1)
        {
            int val;
            scanf("%d",&val);
            insert(val);
        }
        else if(op==2)
        {
            int val;
            scanf("%d",&val);
            insertLast(val);
        }
        else if(op==3)
        {
            print();
        }
        else if(op==4)
        {
            deleteFirst();
        }
        else if(op==5)
        {
            length();
        }
        else if(op==6)
        {
            int data;
            scanf("%d",&data);
            search(data);
        }
        else if(op==7)
        {
            int data;
            scanf("%d",&data);
            insertLaSt(data);
        }
        else if(op==8)
        {
            int x;
            scanf("%d",x);
            deleteItem(x);
        }


    }

}
