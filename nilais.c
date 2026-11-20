#include <stdio.h>

int main() {
    int nilai;
    printf("Masukan Nilai Anda : ");
    scanf("%d", &nilai);

    if (nilai >= 60) {
        printf("Lulus");
    }   else {
    printf("Kamu Tidak Lulus");
    }
    
    return 0;
}

