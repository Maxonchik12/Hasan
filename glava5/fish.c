#include <stdio.h>
#include "fish.h"

void label(fish f) {
    printf("Кличка: %s\n Разновидность: %s\n %i года, %i зубов\n ",
    f.name, f.species, f.teeth, f.age);
    printf("Давать %2.2f кг %s и разрешать %s на протяжении %2.2f часов\n",
    f.care.food.weight,f.care.food.ingridients,f.care.exercise.description,f.care.exercise.duration);
}