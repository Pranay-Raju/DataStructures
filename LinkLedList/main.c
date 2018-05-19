#include <stdio.h>
#include"LL.h"
int main(){
    List list;
    list_ptr=&list;
    list.print = &print_helper;
    list.add = &add_helper;
    list.createNode = &createNode_helper;
    list.head = NULL;

    //to add data in a List
    list.add(5);

    //to print the List
    list.print();
    return 0;
}
