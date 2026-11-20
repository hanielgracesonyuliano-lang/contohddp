#include <stdio.h>

int cekKelulusan(){
    int nilai;

    print("Masukan Nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 60){
        return 1;
    }else{
        return 0;
    }
}

void inputMahasiswa(){
    char nama[50];

    printf("Masukan nama: ");
    scanf("%s" , nama);

    printf("\n Nama: %s \n", nama);
}

int main(){
    

    printf("=== DATA MAHASISWA ===\n");

    inputMahasiswa();

    int status = cekKelulusan();

    if(status == 1){
        printf("Kamu Lulus");
    }else{
        printf("Waktu kamu sudah dekat");

    }

    return 0;
}