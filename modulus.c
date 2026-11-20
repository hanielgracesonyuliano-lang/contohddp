#include <stdio.h>

int main() {
    // int x = 10; //operator assigment
    // int y = 5; //operator assigment / penugasan karena menugaskan nilai 5 ke variabel y
 
    // printf("hasil dari perbandingan x == y : %d\n" , x == y); // apakah x sama dengan y
    // //printf("hasil dari perbandingan x == y : %d\n" , c); // apakah x sama dengan y
    // printf("hasil dari perbandingan x != y : %d\n" , x != y); // apakah x tidak sama dengan y

    // printf("hasil dari perbandingan x > y : %d\n" , x > y); // apakah x lebih besar dari y
    // printf("hasil dari perbandingan x < y : %d\n" , x < y); // apakah x lebih kecil dari y

    // printf("hasil dari perbandingan x >= y : %d\n" , x >= y); // apakah x lebih besar dari y
    // printf("hasil dari perbandingan x <= y : %d\n" , x <= y); // apakah x lebih kecil dari y

    // int nilaiTugas1 = 85;
    // int nilaiTugas2 = 75;

    // int statusLulus = (nilaiTugas1 > 70 && nilaiTugas2 > 60);
    // printf("GW lulus atau gak( 1 = lulus , 0 = gagal): %d\n", statusLulus);

    // int remidi = (nilaiTugas1 < 70 || nilaiTugas2 < 80);
    // printf("cek aja remidi engga (1 = ya , 0 = tidak) : %d\n", remidi);

    char nama[50];
    int umur;
    int nim;
    char kodekelas;
    int soal;
    int kodesoal;
    float r, luas, keliling;

    printf ("Masukan nama anda : ");
    scanf("%s", nama);
    printf ("Masukan umur anda : ");
    scanf("%d", &umur);
    printf ("Masukan nim anda : ");
    scanf("%d", &nim);
    printf ("Masukan kode kelas anda : ");
    scanf(" %c", &kodekelas);

    printf("======Data Diri======\n");
    printf ("\n");
    printf("Nama : %s\n", nama);
    printf("Umur : %d\n", umur);
    printf("Kode Kelas : %c\n", kodekelas);

    kodesoal = 2 - (nim % 2);
    printf("kode soal anda : %d\n", kodesoal);

    printf("=====Bangun Datar Lingkaran=====\n");
    printf("masukan jari-jari lingkaran : ");
    scanf("%f", &r);
    
    luas = 3.14 * r * r;
    keliling = 2 * 3.14 * r;
    printf ("\n");

    printf("======Bangun Datar Lingkaran=====\n");
    printf ("\n");
    printf("Luas Lingkaran : %.2f\n", luas);
    printf("Keliling Lingkaran : %.2f\n", keliling);

    return 0;
}