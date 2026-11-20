#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float sisi1, sisi2, sisi3;

    printf("PROGRAM MENENTUKAN SEGITIGA SIKU-SIKU\n");

    printf("Masukkan sisi pertama: ");
    scanf("%f", &a);

    printf("Masukkan sisi kedua: ");
    scanf("%f", &b);

    printf("Masukkan sisi ketiga: ");
    scanf("%f", &c);

    if (a >= b && a >= c) {
        sisi1 = b;
        sisi2 = c;
        sisi3 = a;
    } 
    else if (b >= a && b >= c) {
        sisi1 = a;
        sisi2 = c;
        sisi3 = b;
    } 
    else {
        sisi1 = a;
        sisi2 = b;
        sisi3 = c;
    }

    if (sisi1 > 0 && sisi2 > 0 &&
        fabs((sisi1 * sisi1) + (sisi2 * sisi2) -
        (sisi3 * sisi3)) < 0.000001 &&
        sisi1 + sisi2 > sisi3) {

        printf("Segitiga tersebut adalah segitiga siku-siku\n");
    } 
    else {
        printf("Segitiga tersebut bukan segitiga siku-siku\n");
    }

    return 0;
}