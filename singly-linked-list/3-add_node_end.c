#include "lists.h"

list_t *add_node_end(list_t **head, const char *str){
    list_t *temp, *newnode;
    newnode = malloc(sizeof(list_t));
    if(newnode == NULL){
        return NULL;
    }
    newnode->str = strdup(str);
    if(newnode->str == NULL){
        free(newnode);
        return NULL;
    }
    newnode->next = NULL;
    if(*head == NULL){
        *head = newnode;
    }
    temp = *head;
    while(temp != NULL){
        temp = temp->next;
    }
    temp->next = newnode;

    return(newnode);
}