/* Write a program to implement stack.
Input : stack of elements
Output: pushed elements,popped elements,stack empty,stack full.
Date  :07/10/12
 */

#include<stdio.h>
int top=-1,stack[50],maxsize;
void push();
void pop();
void display();
void main() {
    int choice;
    printf("Enter the limit of the stack");
    scanf("%d",&maxsize);
    printf(" MENU: \n1.PUSH() \n2.POP()\n3.DISPLAY\n 4.EXIT\n");

    do
    {
        printf("Enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
                push();
                break;
            case 2:
                pop();
                break;
            case 3:display();
                   break;
            case 4:exit(0);

            default:printf("Invalid choice\n");
        }
    } while(choice!=4);
}

void push()
{
    int item;
    if(top==maxsize-1)
        printf("Stack is full\n");
    else
    {
        printf("Enter the item to be pushed: ");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }

}
void pop()
{
    if(top==-1)
        printf("Stack is empty\n");
    else
    {
        printf("Popped element is: %d\t",stack[top]);
        top--;
    }
}
void display()
{
    int index;
    if(top==-1)
        printf("Stack is empty\n");
    else
    {
        printf("Stack elements ara: \n");
        for(index=top;index>=0;index--)
            printf("%d\n",stack[index]);
    }
}




