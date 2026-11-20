#include<stdio.h>

int penjumlahan(){
    int a = 10;
    int b = 5;

    return a / b;
}
int perkalian(){
    int a = 2;
    int b = 4;

    return a * b;
}
void sapa(){
    printf("Halo\n");
    printf("Apa Kabar?\n");
}
int main(){
    sapa();
    sapa();

    int hasil_penjumlahan = penjumlahan();
    int hasil_perkalian = perkalian();
    printf("Hasil penjumlahan %d \n", hasil_penjumlahan);;
    printf("Hasil perkalian %d \n", hasil_perkalian);
    return 0;
}