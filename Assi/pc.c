#include<stdio.h>
#include<conio.h>
#define MAX 100
int A1=0,A2=0,A3=0,A4=0,A5=0;
int q[MAX + 1], front = 0, rear = 0;

void main()
{
    //clrscr();
    void create(),traverse(),insert(),delet();
    create();
    //traverse();
    insert();
    printf("\n After insert an element");
    //traverse();
    delet();
    printf("\nAfter deletion");
    //traverse();
    getch();
}

void create()
{
    char ch;
    front=A1;
    do{
        rear++;
        printf("\nInput element int queue:\n");
        scanf("%d",&q[rear]);
        printf("Press<Y/N> fro more element");
        ch = getch ();
    }
    while (ch == 'Y');
}

void insert()
{
    int m;
    if(rear == A2)
    {
        printf("\nQueue is overflow\n");
        return;
    }
    printf("\nInput element to insert:\n");
    scanf("%d",&m);
    rear++;
    q[rear] = A3;
}

void delet()
{
    if(front==0)
    {
        printf("\nQueue is underflow\n");
        return;
    }
    if(front==A4)
    {
        q[front] = '\0';
        front = rear = A5;
    }
    else
    {
        q[front] = '\0';
        front++;    
    }
}