// DATA MODELS
extern struct node;
typedef struct node Node;//Simplifies Self Reference
struct node{
	int d;
	Node* next;
};

extern struct LIST;
typedef struct LIST List;//Simplifies Self Reference
struct LIST{
	Node* head;
	void (*add)(int);
	Node* (*createNode)(int i);
	void (*print)();
}*list_ptr;//global pointer that will access current operating object

//HELPER FUNCTIONS
Node* createNode_helper(int);
void add_helper(int);
void print_helper();
void clear_helper();
