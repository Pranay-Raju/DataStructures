#include <stdio.h>
#include"LL.h"
int main()
{
    op.print = &print_helper;
    op.add = &add_helper;
    op.createNode = &createNode_helper;
    List list;
    list.head = NULL;
    op.add(&list,5);
    op.print(list.head);
    return 0;
}
