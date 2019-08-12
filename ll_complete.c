#include<stdio.h>
#include<stdlib.h>


struct node
{
  int data;
  struct node *nxt;
};


void addAtEnd(struct node **head,int data)
{
  //printf("1\n" );
  struct node *n=(struct node*)calloc(1,sizeof(int));
  struct node *cur=*head;
  n->data=data;
  if(*head==NULL)
  {
    *head=n;
    n->nxt=NULL;
  }
  else
  {
    while(cur->nxt)
    {
      cur=cur->nxt;
    }
    n->nxt=cur->nxt;
    cur->nxt=n;
  }
}


void addAtBegin(struct node **h,int data)
{
  struct node *n=(struct node*)calloc(1,sizeof(int));
  struct node *cur=*h;
  n->data=data;
  n->nxt=*h;
  *h=n;
}


void addAtPos(struct node **h,int data,int pos)
{
  struct node *n=(struct node*)calloc(1,sizeof(int));
  struct node *cur=*h;
  int count=1;
  n->data=data;
  if(pos==1)
  {
    addAtBegin(h,data);
  }
  else
  {
    while(cur && count<pos-1)
    {
      cur=cur->nxt;
      count++;
    }
    if(count==pos-1 && cur==NULL)
    {
      printf("invalid postion ");
    }
    else
    {
      n->nxt=cur->nxt;
      cur->nxt=n;
    }
  }
}


void delAtBeg(struct node **head)
{
  struct node *cur=*head;
  *head=cur->nxt;
  free(cur);
}


void delAtEnd(struct node **head)
{
  struct node *cur=*head;
  struct node *temp=NULL;
  if(cur->nxt==NULL)
  {
    delAtBeg(head);
    return ;
  }
  while(cur->nxt->nxt)
  {
    cur=cur->nxt;
  }
  temp=cur->nxt;
  cur->nxt=NULL;
  free(temp);
  temp=NULL;
}
/*void delAtEnd(struct node **head)
{
    struct node* curr=*head;
    while(curr&&(curr->nxt)&&(curr->nxt->nxt))
    {
        curr=curr->nxt;
    }
    struct node *temp=curr->nxt;
    free(temp);
    temp=NULL;
    curr->nxt=NULL;
}*/ //vishakha code


void delAtPos(struct node **head,int pos)
{
  int i=2;
    struct node *cur=*head;
    struct node *temp=NULL;
    if(pos==1)
    {
      delAtBeg(head);
      return;
    }
    while(cur && i<pos)
    {
      cur=cur->nxt;
      i++;
    }
    temp=cur->nxt;
    cur->nxt=cur->nxt->nxt;
    free(temp);
    temp=NULL;
}


int main()
{
  struct node* h=NULL;
    addAtBegin(&h,10);
    addAtPos(&h,20,2);
    addAtPos(&h,30,3);
    struct node *cur=h;
    while(cur)
    {
      printf("%d ",cur->data);
      cur=cur->nxt;
    }
    delAtPos(&h,2);
    //addAtBegin(&h,40);
    printf("\n");
  cur=h;
  while(cur)
  {
    printf("%d ",cur->data);
    cur=cur->nxt;
  }
}
