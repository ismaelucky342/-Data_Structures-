#ifndef LIST_H
#define LIST_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next; //next node
    void          *data; //node data
}                 t_list;

#endif