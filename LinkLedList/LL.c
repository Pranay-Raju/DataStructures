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
void add_helper(int i){
  if(list_ptr->head==NULL){
    list_ptr->head = list_ptr->createNode(i);
  }
  else{
    Node* ptr = list_ptr->head;
    while(ptr->next != NULL)ptr = ptr->next;
    ptr->next = list_ptr->createNode(i);
  }
}
void print_helper(){
  if(list_ptr->head==NULL)printf("EMPTY");
  for(Node* ptr = list_ptr->head;ptr!=NULL;ptr=ptr->next){
    printf("%d\t",ptr->d);
  }
}

void clear_helper(){
  while(list_ptr->head->next!=NULL){
    Node* ptr = list_ptr->head;
    while (ptr->next!=NULL)ptr = ptr->next;
    free(ptr);
  }
  free(list_ptr->head);
  list_ptr->head = NULL;
}
