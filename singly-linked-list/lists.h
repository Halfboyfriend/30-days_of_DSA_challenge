#ifndef __LIST_H__
#define __LIST_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
