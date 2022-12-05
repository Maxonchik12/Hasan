#include <stdio.h>
#include "fish.h"

int main() {
    fish snappy = {"Зубастик", "пиранья", 69, 4, {{"мяса", 0.2}, {"плавать",7.5}}};
    label(snappy);
    return 0;
}