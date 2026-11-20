#include <stdio.h>

int main() {
    char nama[50];
    printf("Masukkan nama: ");
    scanf("%[^\n]s", nama);
    printf("Nama Anda: %s\n", nama);
    return 0;
}