#include <stdio.h>
#include "hfcal.h"

void display_calories(float weight, float distance, float coef) {
	printf("Ves: %3.2f funta\n", weight);
	printf("Rasstoyanie: %3.2f mili\n", distance);
	printf("Sojjeno kaloriy: %4.2f kal\n", coef*weight*distance);
}