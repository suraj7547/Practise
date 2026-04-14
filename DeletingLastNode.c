#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *link;
};
void print(struct node *head){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d ->",ptr->data);
        ptr=ptr->link;
    }
    printf("NULL\n");
}
void dellastnode(struct node *head){
    struct node *ptr=head;
    if(head==NULL){
        printf("Linked list is empty");
    } else if(head->link==NULL) {
        free(head);
        head=NULL;
    }else{
        while(ptr->link->link!=NULL){
            ptr=ptr->link;
        }
        free(ptr->link);
        ptr->link=NULL;
    }
}
void addnode(struct node *head,int data){
    struct node *ptr=head;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}
int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    addnode(head,12);
    addnode(head,14);
    addnode(head,16);
    addnode(head,18);
    printf("Linked list before deleting last node \n");
    print(head);
    dellastnode(head);
    printf("Linked list after deleting last node \n");
    print(head);
    return 0;
}
