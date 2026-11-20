#include <stdio.h>

int main() {
    FILE *fp;

//membuka file untuk menulis
fp = fopen("contoh.txt", "w");

//mengecek file
if (fp == NULL) {
    printf("Gagal membuka file.\n");
    return 1; //keluar dari program jika gagal membuka file
}

fprintf(fp,"Nama : Haniel\n");
fprintf(fp,"NIM : 123456789\n");
fprintf(fp,"Nilai : 90\n");

fclose(fp); //menutup file

printf("Data berhasil disimpan.\n");

}