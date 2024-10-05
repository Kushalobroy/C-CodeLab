#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void display(struct Node* node)
{
    while(node !=NULL)
    {
        printf("%d,",node->data);
        node=node->next;
    }
}
int main()
{
    struct Node* head=NULL;
    struct Node* node2=NULL;
    struct Node* node3=NULL;
    struct Node* node4=NULL;
    struct Node* node5=NULL;

    head=(struct Node*)malloc(sizeof(struct Node));
    node2=(struct Node*)malloc(sizeof(struct Node));
    node3=(struct Node*)malloc(sizeof(struct Node));
    node4=(struct Node*)malloc(sizeof(struct Node));
    node5=(struct Node*)malloc(sizeof(struct Node));

    head->data=1;
    head->next=node2;

    node2->data=2;
    node2->next=node3;
    
    node3->data=3;
    node3->next=node4;

    node4->data=4;
    node4->next=node5;
    
    node5->data=5;
    node5->next=NULL;

    display(head);
    return 0;

}