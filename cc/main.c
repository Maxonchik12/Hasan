#include <stdio.h>
int main() {
int x,y,z,d;
printf ("Vvedite x: ");
scanf ("%d", &x);
printf("Vvedite y: ");
scanf ("%d", &y);
printf ("Vvedite deistvie:\n");
printf ("1 - slojenie\n");
printf ("2 - vychitanie\n");
printf ("3 - umnojenie\n");
printf("4 - delenie\n");
scanf ("%d",&d);
if (d == 1) {
    z = x + y;
    printf ("%d + %d = %d\n"),x,y,z;
}
else if (d == 2) {
    z = x - y;
    printf("%d - %d = %d\n"),x,y,z;
}
else if (d == 3) {
    z = x * y;
    printf ("%d * %d = %d\n",x,y,z);
}
else if (d == 4) {
    if (y==0) {
        printf ("Nelzya delit na nol!\n");
    }
    else {
    z = (double) x / y;
    printf ("%d / %d = %d\n",x,y,z);
}
}
else { 
    printf ("Nevernoe deistvie!\n");
}
return 0;
}