#include<stdio.h>

int main(){
    // char nama[] = "Budi";

    // printf("%s\n", nama);
    // printf("%c\n", nama[0]);
    char nama[50];

    printf("Masukan nama: ");
    scanf("%49s", nama);

    printf("Nama Anda: %s\n", nama);
   
    return 0;
}