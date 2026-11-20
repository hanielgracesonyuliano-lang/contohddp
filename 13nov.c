// #include <stdio.h>

// int main() {
//    char nama [30];

//    printf("Masukan Nama panggilan : ");
//    scanf("%s" ,nama);

//    printf("Halo nama aku %s", nama);

//    return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char kalimat[30];

//     printf("Masukan kalimat : ");
//     fgets(kalimat, sizeof(kalimat), stdin);

//     kalimat[strcspn(kalimat, "\n")] = '\0'; 

//     int panjang = strlen(kalimat);

//     printf("kalimat: %s\n" , kalimat);
//     printf("jumlah karakter: %d\n", panjang);

// }

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char nama[] = "Moses";
//     char kalimat[] = "Halo, nama saya adalah Moses";

//     printf("Panjang nama: %d", strlen(nama));
//     printf("Panjang kalimat: %d", strlen(kalimat));

// }

// #include <stdio.h>
// #include <string.h>

// int main (){
//     char nama1[] = "Niel";
//     char nama2[] = "Moses";

//     strcat(nama1, nama2);
//     printf("Nama pertama: %s\n", nama1);
//     printf("Nama kedua: %s\n", nama2);
// }

#include <stdio.h>
#include <string.h>

int main(){
    char nama[] = "Niel";
    char tambahan[] = " Adalah Mahasiswa";
    char tambahan2[] = " Universitas Kristen Petra";

    strcat(strcat(nama, tambahan), tambahan2);
    printf("Hasil penggabungan: %s\n", nama);
    //puts(nama1);
}