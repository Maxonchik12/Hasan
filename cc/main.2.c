#include <stdio.h>
void go_south_east(int *lat,int *lon)
{
    *lat = *lat - 2;
    *lon = *lon + 2;
}
int main() {
    int latitude = 32;
    int longitude = -64;
    go_south_east(&latitude, &longitude);
    printf ("Stop! Теперь наши координаты: [%i,%i]\n", latitude,longitude);
    return 0;
}