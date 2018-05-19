// DATA MODELS
typedef struct node{
    int d;
    struct node* next;
}Node;
typedef struct{
    Node* head;
}List;
struct Operations{
    void (*add)(List*,int);
    Node* (*createNode)(int i);
    void (*print)(List list);
}op;

//HELPER FUNCTIONS
Node* createNode_helper(int);
void add_helper(List*,int);
void print_helper(List);
