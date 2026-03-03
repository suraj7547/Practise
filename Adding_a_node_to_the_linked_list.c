#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
}*head = NULL;

void nodecount(struct node *head){
    int count=0;
    if(head==NULL) printf("Linked list is empty\n");
    struct node *ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;
    }
    printf("The length of the node is: %d\n",count);
}
void printnode(struct node *head){
    if(head==NULL) printf("Linked list is empty\n");
    struct node *ptr=head;
    printf("===Linked List===\n");
    while(ptr!=NULL){
        printf("%d -> ",ptr->data);
        ptr=ptr->link;
    }
    printf(" NULL");
}

void addingnode(struct node *head,int data){
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
    head->data=34;
    head->link=NULL;
    
    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=32;
    current->link=NULL;
    head->link=current;

    struct node *current1=(struct node*)malloc(sizeof(struct node));
    current1->data=52;
    current1->link=NULL;
    head->link->link=current1;

    int data=57;

    // printf("%d\n",head->link->data);
    addingnode(head,data);
    nodecount(head);
    printnode(head);
    return 0;
    

}
