#include "../Structure/List.h"

t_list *createNode(void *data);


void    insertBeginning(t_list **head, void *data)
{
    t_list *newNode = createNode(data);

    while (newNode) 
        newNode->next = *head;  
        *head = newNode; 
    return; 
}


t_list *createNode(void *data)
{
    t_list *newNode;
     
    if(!(newNode = (t_list *)malloc(sizeof(t_list)))) 
        return NULL;
    
    newNode->data = data; 
    newNode->next = NULL;

    return newNode; 
}