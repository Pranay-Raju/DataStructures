#include <stdio.h>
#include"LL.h"
int main()
{
    op.print = &print_helper;
    op.add = &add_helper;
    op.createNode = &createNode_helper;
    List list;
    list.head = NULL;

    //to add data in a List
    op.add(&list,5);

    //to print the List
    op.print(list);
    return 0;
}
