#include "lists.h"

list_t *add_node(list_t **head, const char *str){
    list_t *newnode;
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
    newnode->next = *head;
    *head = newnode;

    return newnode;
}