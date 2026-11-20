#include <stdio.h>

int main(){
    FILE *halo;
    char nama[50];
    char nim[20];

    halo = fopen("mahasiswa.txt", "w"); //membuka file untuk menulis

    printf("Masukan NIM: ");
    scanf("%s", nim);

    printf("Masukan Nama: ");
    scanf("%s", nama); //membaca input hingga newline}

    fprintf(halo, "NIM : %s\n", nim);
    fprintf(halo, "Nama : %s\n", nama);

    fclose(halo); //menutup file
    printf("\nSukses");
    return 0;