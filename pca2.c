#include <stdio.h>
#include <string.h>

//Code written by Soham Banerjee Roll- CSE2020/002
struct node 
{
    int x;
    struct node next;

};

int main ()
{
    struct node temp;
    temp.x =10;
    temp.next=temp;
    printf("%d",temp.next.x);
    return 0;
}