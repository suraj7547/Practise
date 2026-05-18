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

void delatpos(struct node **head,int pos){
    struct node *prev,*curr;
    prev=*head;
    curr=*head;
    if(curr==NULL) printf("Linked list is empty");
    else if(pos=1){
        free(curr);
        curr=NULL;
    }else{
        while(pos!=1){
            prev=curr;
            curr=curr->link;
            pos--;
        }
        prev->link=curr->link;
        free(curr);
        curr=NULL;
    }
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
    printf("Linked list after deleting the node\n");
    delatpos(&head,3);
    print(head);
    
    return 0;
}
