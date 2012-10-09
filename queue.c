#include<stdio.h>
int rear=-1,front=-1,queue[50],maxsize;
void insert();
void delete();
void display();
void main() {
    int choice;
    printf("Enter the limit of the queue");
    scanf("%d",&maxsize);
    printf(" MENU: \n1.INSERT() \n2.DELETE()\n3.DISPLAY\n 4.EXIT\n");
    do
    {
        printf("Enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();
                    break;
            case 2: delete();
                   break;
            case 3: display();
                   break;
            case 4: exit(0);

            default:printf("Invalid choice\n");
        }
    } while(choice!=4);
}

void insert()
{
    int item;
    if(rear>=maxsize-1)
        printf("queue is full");
    else
    {
        if(front==-1)
            front=0;
        printf("Enter the item to be inserted: ");
        scanf("%d",&item);
        rear=rear+1;
        queue[rear]=item;
    }

}
void delete()
{
    if(front==-1||front>rear)
        printf("queue is empty");
    else
    {
        printf("Deleted element is: %d\t",queue[front]);
        front++;
    }
    if(front>rear) {

        front=rear=-1;
    }
}
void display()
{
    int index;
    if(front>rear) {

        printf("queue is empty");
    }
    else
    {
        printf("Elements in the queue are: \n");
        for(index=front;index<=rear;index++)
            printf("%d\n",queue[index]);
    }
}




