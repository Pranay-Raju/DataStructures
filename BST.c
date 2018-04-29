#include <stdio.h>
#include<stdlib.h>

typedef struct node{
    int d;
    struct node* right;
    struct node* left;
} Node;

typedef struct{
    Node* root;
} Tree;

struct{
    void (*insert)(Node** root,int n);
    void (*inorder)(Node* head);
    Node* (*createNode)(int i);
}op;

Node* createNode_helper(int i){
    Node* n = (Node*)malloc(sizeof(Node));
    n->d = i;
    n->right = NULL;
    n->left=NULL;
    return n;
}
void insert_helper(Node** head,int i){
    if(*head==NULL){
        *head = op.createNode(i);
        return;
    }
    else if((*head)->d>i){
        if((*head)->left == NULL){
            (*head)->left = op.createNode(i);
        }
        else{
            op.insert(&(*head)->left,i);
        }
    }
    else if((*head)->d<i){
        if((*head)->right == NULL){
            (*head)->right = op.createNode(i);
        }
        else{
            op.insert(&(*head)->right,i);
        }
    }
}
void inorder_helper(Node* head){
    if(head == NULL)return;
    op.inorder(head->left);
    printf("%d\t",head->d);
    op.inorder(head->right);
}