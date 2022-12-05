#include <stdio.h>
#include "island.h"
#include <stdlib.h>

void release(island *start)
{
    island *i = start;
    island *next = NULL;
    for  (; i != NULL; i = next) {
        next = i->next
    }
}
void display(island *start) {
    island *i = start;
    for (; i != NULL; i = i->next) {
        printf("Название: %s открыто с %s до %s\n",
            i->name, i->opens, i->closes);
    }
}

island* create(char *name) {
    island *i = malloc(sizeof(island));
    i->name = name;
    i->opens = "9:00";
    i->closes = "17:00";
    i->next = NULL;
    return i;
}