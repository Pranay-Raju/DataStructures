#include<stdio.h>
#include<stdlib.h>
#include"LL.h"
//HELPER FUNCTIONS
Node* createNode_helper(int i){
    Node* n = (Node*)malloc(sizeof(Node));
    n->d = i;
    n->next = NULL;
    return n;
}
void add_helper(List* list,int i){
    if(list->head==NULL){
        list->head = op.createNode(i);
    }
    else{
        Node* ptr = list->head;
        while(ptr->next != NULL)ptr = ptr->next;
        ptr->next = op.createNode(i);
    }
}
void print_helper(List list){
    for(Node* ptr = list.head;ptr!=NULL;ptr=ptr->next){
        printf("%d\t",ptr->d);
    }
}
