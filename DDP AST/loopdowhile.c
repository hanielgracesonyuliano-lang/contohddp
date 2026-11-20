#include <stdio.h>

int main() {
    int angka;
    do {
        printf("Masukkan angka (ketik 0 untuk berhenti): ");
        scanf("%d", &angka);
    } while (angka != 0);

    printf("Program selesai.\n");
    return 0;
}