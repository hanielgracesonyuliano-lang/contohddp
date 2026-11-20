// #include <stdio.h>

// int main() {
//     int pilihan;
//     printf("=== Menu Makanan ===\n1. Nasi goreng\n2. Steak\n3. Bubur\n4. Ayam bakar\n");
//     printf("Pilih nomor (1-4): ");
//     scanf("%d", &pilihan);

//     switch (pilihan) {
//         case 1: printf("Anda memilih Nasi goreng\n"); break;
//         case 2: printf("Anda memilih Steak\n"); break;
//         case 3: printf("Anda memilih Bubur\n"); break;
//         case 4: printf("Anda memilih Ayam bakar\n"); break;
//         default: printf("Pilihan tidak valid\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int Angkarahasia = 7;
    int tebakan;

    do {
        printf("Masukkan tebakan Anda: ");
        scanf("%d", &tebakan);

        if (tebakan != Angkarahasia) {
            printf("Tebakan salah, coba lagi!\n");
        }

    } while (tebakan != Angkarahasia);
    
    printf("Tebakan benar!\n");

    return 0;
}