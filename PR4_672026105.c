#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("PROGRAM MENGHITUNG SISI MIRING SEGITIGA\n");

    printf("Masukkan sisi pertama: ");
    scanf("%f", &a);

    printf("Masukkan sisi kedua: ");
    scanf("%f", &b);

    c = sqrt((a * a) + (b * b));

    printf("Sisi miring segitiga adalah: %.2f\n", c);

    return 0;
}