#include<stdio.h>
#include<stdlib.h>

// DATA MODELS
typedef struct node{
    int d;
    struct node* next;
}Node;
struct Operations{
    void (*add)(Node*,int);
    Node* (*createNode)(int i);
    void (*print)(Node* head);
}op;
typedef struct{
    Node* head;
}List;

//HELPER FUNCTIONS
Node* createNode_helper(int i){
    Node* n = (Node*)malloc(sizeof(Node));
    n->d = i;
    n->next = NULL;
    return n;
}
void add_helper(Node** head,int i){
    if(*head==NULL){
        *head = op.createNode(i);
    }
    else{
        Node* ptr = *head;
        while(ptr->next != NULL)ptr = ptr->next;
        ptr->next = op.createNode(i);
    }
}
void print_helper(Node* head){
    for(Node* ptr = head;ptr!=NULL;ptr=ptr->next){
        printf("%d\t",ptr->d);
    }
}
