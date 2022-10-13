#include <stdio.h>
#include <stdlib.h>

struct node 
    {
        int data;
        struct node *next;
    } *first;

void create(int A[],int n)
{
  struct node *temp,*last;

  first=(struct node*)malloc(sizeof(struct node));
  first->data=A[0];
  first->next=NULL;
  last=first;

  for(int i=1;i<n;i++)
  {
      temp=(struct node*)malloc(sizeof(struct node));
      temp->data=A[i];
      temp->next=NULL;
      last->next=temp;
      last=temp;
  }
}

void display(struct node *p)
{
  while(p!=NULL)
  {
    printf("->%d ", p->data);
    p=p->next;
  }
}

int main()
{
    int n;
    scanf("%d", &n);

    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }

    create(A,n);
    display(first);
    
    return 0;
}