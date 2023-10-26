#include "lists.h"

void free_list(list_t *head){
    list_t *temp;

    temp = head;
    while(temp != NULL){
        free(temp);
    }
   
}