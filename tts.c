#include <stdio.h>

int main() {
    char nama[50], nim[20];

    printf("Masukkan nama: ");
    scanf("%[^\n]s", nama);
    printf("Masukkan NIM: ");
    scanf("%s", nim);

    printf("\n--- Data Mahasiswa ---\n");
    printf("Nama : %s\n", nama);
    printf("NIM  : %s\n", nim);
    return 0;
} 