#include <stdio.h>
#include <math.h>

int main(){

    float alas, tinggi,smiring;
    int alas2, tinggi2, sum;

    printf("Masukkan alas:");
    scanf("%f", &alas);

    printf("Masukkan tinggi:");
    scanf ("%f", &tinggi);

    alas2 = alas*alas;
    tinggi2 = tinggi*tinggi;
    sum = alas2 + tinggi2;

    smiring = sqrt(sum);

    printf("Maka, sisi miringnya adalah:%.2f cm", smiring);
    
return 0;
}