#include <stdio.h>

int main(){
    int nilai[5];
    int i, pilihan;

    for(i = 0; i < 5; i++){
        printf("Masukkan nilai ke-%d: ", i+1);
        scanf("%d", &nilai[i]);
    }

    printf("Masukkan nomor nilai yang ingin diambil(1-5): ");
    scanf("%d", &pilihan);

    if(pilihan >= 1 && pilihan <= 5){
        printf("Nilai ke-%d adalah: %d\n", pilihan, nilai[pilihan - 1]);
    } else {
        printf("Pilihan tidak tersedia!\n");
    }
    return 0;
}