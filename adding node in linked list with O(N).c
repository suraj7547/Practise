#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
} *head=NULL;

void nodeprint(struct node *head){
    struct node *ptr;
    ptr=head;
    printf("==Linked List===\n");
    while(ptr!=NULL){
        printf("%d -> ",ptr->data);
        ptr=ptr->link;
    }
    printf("NULL\n");
}

void AddingNodeAtTheEnd(struct node *head,int data){
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}

int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=01;
    head->link=NULL;
    AddingNodeAtTheEnd(head,02);
    AddingNodeAtTheEnd(head,03);
    nodeprint(head);
    return 0;
}
