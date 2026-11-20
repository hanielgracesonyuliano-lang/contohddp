#include <stdio.h>

int main(){

    int nim;
    char kodeKelas;
    int kodeSoal;
    float r, luas, keliling;
    


    printf("Masukkan NIM anda: ");
    scanf("%d", &nim);

    printf("Masukkan kode kelas DDP Anda : ");
    scanf(" %c", &kodeKelas);

    kodeSoal = 1 - (nim % 2);

    printf("=== DATA DIRI ===\n");

    printf("NIM: %d\n", nim);
    printf("Kode Kelas DDP : %c\n", kodeKelas);
    printf("Kode soal anda: %d\n", kodeSoal);
    printf("===================\n");

    printf("=====Bangun datar=====\n");
    printf("Masukkan jari-jari lingkaran :");
    scanf("%f", &r);

    luas = 3.14 * r * r;
    keliling = 2 * 3.14 * r;

    printf("=======Bangun Datar======\n");
    printf("Luas Lingkaran:%.2f cm2\n", luas);
    printf("Keliling Lingkaran:%.2f cm\n", keliling);
    printf("==========================\n");

    return 0;
}