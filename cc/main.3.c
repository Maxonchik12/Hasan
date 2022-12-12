#include <stdio.h>
void fortune_cookie (char msg[]) {
printf("Сообщение гласит: %s\n", msg);
printf("длина сообщения: %lu\n", sizeof(msg));
}
int main() {
    char quote[] = "печенье вас полнит!";
    fortune_cookie(quote);
    return 0;
}