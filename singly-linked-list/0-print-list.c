#include "lists.h"


size_t print_list(const list_t *h){

    const list_t *temp;
    size_t count;

    temp = h;
    count = 0;

    if(temp == NULL){
        return (count);
    }

    while(temp != 0){
        if(temp->str == NULL){
            printf("[0] (nil)\n");
        }
        printf("[%d] %s\n", temp->len, temp->str);
        temp = temp -> next;
        count++;
    }
    return (count);

}
