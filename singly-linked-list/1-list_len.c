#include "lists.h"

size_t list_len(const list_t *h){
   const list_t *temp;
    size_t count;

    temp = h;
    if(temp == NULL){
        return(count);
    }
    while(temp != NULL){
        temp = temp -> next;
        count++;
    }
    
    return(count);

}