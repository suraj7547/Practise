#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*head=NULL;

void print(struct node *head){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

void addnode(struct node *head,int data){
    struct node *ptr=head;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    while(ptr->next!=NULL) ptr=ptr->next;
    ptr->next=temp;
}

void add_at_pos(struct node *head,int data,int position){
    struct node *ptr=head;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    while(position!=2){
        ptr=ptr->next;
        position--;
    }
    temp->next=ptr->next;
    ptr->next=temp;
}

int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=34;
    head->next=NULL;
    addnode(head,35);
    addnode(head,36);
    addnode(head,37);
    add_at_pos(head,3,3);
    print(head);
    return 0;
}
