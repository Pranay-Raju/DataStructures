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
Node* createNode_helper(int);
void add_helper(Node**,int);
void print_helper(Node*);