#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
void PrintLinkedList(struct node *head){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d ->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}
void AddNode(struct node *head,int data){
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
}
void AddingNodeAtPos(struct node *head,int data,int pos){
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    pos--;
    while(pos!=1){
        ptr=ptr->next;
        pos--;
    }
    temp->next=ptr->next;
    ptr->next=temp;
}
int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=12;
    head->next=NULL;
    AddNode(head,14);
    AddNode(head,16);
    AddNode(head,18);
    AddNode(head,20);
    AddingNodeAtPos(head,17,3);
    PrintLinkedList(head);
    return 0;
}
