#include <stdio.h>

int main(){
    FILE *mahasiswa;
    char teks[100];

    //membuka file untuk membaca
    mahasiswa = fopen("mahasiswa.txt", "r");

    if (mahasiswa == NULL) {
        printf("Gagal membuka file.\n");
        return 1; //keluar dari program jika gagal membuka file
    }

    //membaca data dari file
    while (fgets(teks, sizeof(teks), mahasiswa) != NULL) {
        printf("%s", teks); //menampilkan data ke layar
    }
    //menutup file
    fclose(mahasiswa);

    return 0;
}