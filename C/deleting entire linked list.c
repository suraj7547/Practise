#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
}*head=NULL;


void print(struct node *head){
    struct node *ptr=head;
    if(head==NULL){
        printf("Linked list is empty");
        return;
    }
    while(ptr!=NULL){
        printf("%d -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

void nodeatend(struct node* head,int data){
    struct node *ptr=head;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
}

struct node *del_list(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        free(head);
        head=temp;
    }
    return head;
}

int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=34;
    head->next=NULL;
    nodeatend(head,35);
    nodeatend(head,36);
    nodeatend(head,37);
    head=del_list(head);
    print(head);
    return 0;
}
