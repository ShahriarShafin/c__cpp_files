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
    {
        tail->next=newNode;
    }

    else
    {
        head=newNode;
    }

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


int length()//The function will return the length of the list
{
    //Write your code here
}

struct node* search(int value) // The function will search the value from the list and return it
{
    //Write your code here
}
void deleteFirst() //Queue
{
    struct node * temp;

    temp = head;

    head = head->next;

    if (head != 0)
    {
        head->prev = 0;
         printf("SUCCESSFULLY Deleted The First Item.\n");
    }



    else if(head==NULL)
    {

    printf("There is no Item in the List.\n");

    }

}






void deleteLast()  //Stuck
{

    struct node *temp;
    temp = tail;

    tail->prev->next = NULL;
       tail = tail->prev;


}


void deleteItem(int value) // The function will delete the value from the list, if the value exists in the list
{
    //Write your code here
}



int main()
{
    init();
    int op;
    printf("1.Insert Item.\n");
    printf("2.print\n");
    printf("3.Queue ( 1st in 1st out. )\n");
    printf("4.Stuck ( last in 1st out.)\n");
    while(1)
    {

          scanf("%d",&op);
       /*   if(op==8)
          {
              int val;
              scanf("%d",&val);
              insert(val);
          }    */

        if(op==1)
        {
            int val;
            scanf("%d",&val);
            insertLast(val);
        }


        else if(op==2)
        {
            print();
        }
        else if(op==3)
        {
            deleteFirst();
        }
        else if(op==4)
        {
            deleteLast();
        }
    }

}
