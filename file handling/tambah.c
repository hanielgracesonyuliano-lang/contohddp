#include <stdio.h>

int main(){
    FILE *tambah;

    tambah = fopen("mahasiswa.txt", "a"); //membuka file untuk menambahkan data

    if(tambah == NULL) {
        printf("Gagal membuka file.\n");
        return 1; //keluar dari program jika gagal membuka file
    }

    //tambahkan data ke file
    fprintf(tambah, "Nama : Victor\n");
    fprintf(tambah, "NIM : 672024678\n");
    fprintf(tambah, "Nilai : 90\n");

    fclose(tambah);
    fprintf(stdout, "Data berhasil ditambahkan ke file.\n");

    return 0;
}