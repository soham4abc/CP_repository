#include<stdio.h>
int stack[100];
int y,n,i,top,choice=0;
void push(void);
void pop(void);
void display(void);
void isfull(void);
void isempty(void);

int main()
{
    top=-1;
    printf("Enter the no of elements");
    scanf("%d",&n);
    printf("Enter your choice:\n i)Push \n ii)Pop \n iii)Display \n iv)IsFull \n v)IsEmpty");
    while (choice!=6)
    {
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:
     {
        push();
     break;
     }

     case 2:
     {
        pop();
     break;
     }

     case 3:
     {
        display();
     break;
     }

     case 4:
     {
        isempty();
     break;
     }

     case 5:
     {
        isfull();
     break;
     }

     default:
     {
     printf("Your choice is wrong\n");
     break;
     }
    }
}


   
}

void push()
{
    if(top>=n-1)
    {
        printf("Stack is overflow\n");
    }
 
    else
    {
        printf("Enter the element: \n");
        scanf("%d",&y);
        top++;
        stack[top]=y;
    }
}

 void pop()
 {
     if(top<=-1)
     {
        printf("Stack underflow \n");
     }

     else
     {
        printf("The number deleted is %d\n ",stack[top]);
        top--;
     }
 }
 void display()
 {
     for ( i=top; i >= 0; i--)
     {
      printf("%d\n",stack[i]);
     }
 }
 void isempty()
 {
     if(top<=1)
     {
        printf("Stack is empty\n");
     }

     else
     {
        printf("Stack is not empty the elements are:\n");
        for ( i=top; i >= 0; i--)
        {
        printf("%d\n",stack[i]);
        }
     }
 }
 
 void isfull()
 {
     if(top==n-1)
     {
         printf("Stack is full\n");
     }

     else
     {
         printf("Stack is not full the remaining elements are :");
        for ( i=top; i >= 0; i--)
        {
         printf("%d\n",stack[i]);
        }
     }
 }