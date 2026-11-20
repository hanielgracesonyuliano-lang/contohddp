#include <stdio.h>

int main(void) {
    int angka;

    printf("Masukkan bilangan (0-20): ");

    if (scanf("%d", &angka) != 1) {
        printf("Input tidak valid.\n");
    } else if (angka < 0 || angka > 20) {
        printf("Bilangan harus berada di antara 0 dan 20.\n");
    } else {
        switch (angka) {
            case 0:  printf("nol\n"); break;
            case 1:  printf("satu\n"); break;
            case 2:  printf("dua\n"); break;
            case 3:  printf("tiga\n"); break;
            case 4:  printf("empat\n"); break;
            case 5:  printf("lima\n"); break;
            case 6:  printf("enam\n"); break;
            case 7:  printf("tujuh\n"); break;
            case 8:  printf("delapan\n"); break;
            case 9:  printf("sembilan\n"); break;
            case 10: printf("sepuluh\n"); break;
            case 11: printf("sebelas\n"); break;
            case 12: printf("dua belas\n"); break;
            case 13: printf("tiga belas\n"); break;
            case 14: printf("empat belas\n"); break;
            case 15: printf("lima belas\n"); break;
            case 16: printf("enam belas\n"); break;
            case 17: printf("tujuh belas\n"); break;
            case 18: printf("delapan belas\n"); break;
            case 19: printf("sembilan belas\n"); break;
            case 20: printf("dua puluh\n"); break;
        }
    }

    return 0;
}
