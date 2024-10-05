#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL;
struct node{
    int data;
    struct node *next;
};
void ins(int data){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=head;
    head=temp;
}
void ins_at_pos_n(int data, int position){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    int i;
    struct node *temp=head;
    if(position==1)
    {
        ptr->next=temp;
        head
    }
}