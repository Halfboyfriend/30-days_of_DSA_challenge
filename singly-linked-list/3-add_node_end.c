#include "lists.h"

list_t *add_node_end(list_t **head, const char *str){
    list_t *newnode, *temp;
    newnode = malloc(sizeof(list_t));
    if(newnode == NULL){
        return NULL;
    }
    newnode->str = strdup(str);
    newnode->len = strlen(str);

    if(newnode->str == NULL){
        free(newnode);
        return NULL;
    }
    newnode->next = NULL;
    if(*head == NULL){
        *head = newnode;
        return(newnode);
    }
   temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;

    return(newnode);
}