#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
void printlinkedlist(struct node *head){
    if(head==NULL)
        printf("Linked list is empty");
    else {
        struct node *ptr=head;
        while(ptr!=NULL){
            printf("%d ->",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL\n");
    }
}
struct node *deletingfirstnode(struct node *head){
    if(head==NULL)
        printf("Linked list is empty");
    else {
        struct node *ptr=head;
        head=ptr->next;
        free(ptr);
        ptr=NULL;
        return head;
    }
}
void addnode(struct node *head,int data){
    struct node *ptr=head;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
}
int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=NULL;
    addnode(head,12);
    addnode(head,14);
    addnode(head,16);
    addnode(head,18);
    printf("Linked list before deleting first node \n");
    printlinkedlist(head);
    head=deletingfirstnode(head);
    printf("Linked list after deleting first node \n");
    printlinkedlist(head);
    return 0;
}
