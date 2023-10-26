#include "lists.h"

void free_list(list_t *head){
    list_t *temp;

    if(head == NULL){
        return NULL;
    }
    temp = head;
    while(temp != NULL){
        free(temp);
    }
    return(temp);
}