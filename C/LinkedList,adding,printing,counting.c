#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
}*head=NULL;

void printnode(struct node *head){
    struct node *ptr=head;
    if(ptr==NULL) printf("Linked list is empty\n");
    while(ptr!=NULL){
        printf("%d -> ",ptr->data);
        ptr=ptr->link;
    }
    printf("NULL\n");
}

void countnode(struct node *head){
    struct node *ptr=head;
    int count=0;
    if(ptr==NULL) printf("Linked list is empty\n");
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;
    }
    printf("No. of nodes: %d\n",count);
}

void addingnode(struct node *head,int data){
    struct node *ptr=head;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL) ptr=ptr->link;
    ptr->link=temp;
}

struct node *addingnodeattheend(struct node *ptr,int data){
    // struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    ptr->link=temp;
    return temp;
}

int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=39;
    head->link=NULL;
    struct node *ptr=head;
    ptr=addingnodeattheend(ptr,23);
    ptr=addingnodeattheend(ptr,33);
    ptr=addingnodeattheend(ptr,43);
    ptr=addingnodeattheend(ptr,53);
    ptr=head;
    countnode(head);
    printnode(head);
    return 0;
}
