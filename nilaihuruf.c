#include <stdio.h>

int main() {
    int nilai;
    printf("Masukkan nilai (0-100): ");
    scanf("%d", &nilai);

    if (nilai >= 85 && nilai <= 100) {
        printf("Nilai Huruf: A\n");
    } else if (nilai >= 75) {
        printf("Nilai Huruf: B\n");
    } else if (nilai >= 60) {
        printf("Nilai Huruf: C\n");
    } else if (nilai >= 50) {
        printf("Nilai Huruf: D\n");
    } else if (nilai >= 0) {
        printf("Nilai Huruf: E\n");
    } else {
        printf("Nilai : D\n");
    }
    return 0;
}