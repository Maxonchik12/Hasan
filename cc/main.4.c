#include <stdio.h>

int main() {
    int contestants[] = {1,2,3};
    int *choice = contestants;
    contestants[0] = 2;
    contestants[1] = contestants[2];
    contestants[2] = *choice;
    printf ("Я собираюсь выбрать претедента номер %i\n", contestants[2]);
    printf("%p\n",&contestants[0]);
    return 0;
}