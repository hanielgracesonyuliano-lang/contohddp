#include <stdio.h>

int main(){
    FILE *fp;

    fp = fopen("contoh.txt", "w"); //buka file untuk menulis
    fprintf(fp, "Halo nama saya Haniel\n");
    fclose(fp); //tutup file

    printf("File berhasil dibuat dan ditulis.\n");
    return 0;
}