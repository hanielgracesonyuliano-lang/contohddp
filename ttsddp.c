// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     char input[20];
//     int a, b, c, s1, s2, s3;

//     // Loop untuk mengulang proses secara terus-menerus
//     while (1) {
//         printf("\nMasukkan panjang sisi pertama: (ketik . program dihentikan.) ");
//         scanf("%19s", input);

//         // Kondisi berhenti jika input adalah titik
//         if (strcmp(input, ".") == 0) {
//             printf("Program dihentikan.\n");
//             break;
//         }

//         // Mengubah input sisi pertama dari string (char array) menjadi integer
//         s1 = atoi(input);

//         printf("Masukkan panjang sisi kedua: ");
//         scanf("%d", &s2);
//         printf("Masukkan panjang sisi ketiga: ");
//         scanf("%d", &s3);

//         // Menentukan sisi terpanjang untuk dijadikan 'c' (sisi miring)
//         if (s1 >= s2 && s1 >= s3) {
//             c = s1; 
//             a = s2; 
//             b = s3;
//         } else if (s2 >= s1 && s2 >= s3) {
//             c = s2; 
//             a = s1; 
//             b = s3;
//         } else {
//             c = s3; 
//             a = s1; 
//             b = s2;
//         }

//         // Mengecek validitas menggunakan rumus Pythagoras: a^2 + b^2 = c^2
//         if ((a * a + b * b) == (c * c)) {
//             printf("=> Ini adalah Segitiga Siku-Siku.\n");
//         } else {
//             printf("=>  Ini BUKAN Segitiga Siku-Siku.\n");
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int a, b, c, s1, s2, s3;

    printf("Ketik titik (.) pada input sisi pertama untuk berhenti.\n");

    while (1) {
        printf("\nMasukkan panjang sisi pertama: ");
        
        if (scanf("%d", &s1) == 0) {
            printf("Program dihentikan.\n");
            break;
        }

        printf("Masukkan panjang sisi kedua: ");
        scanf("%d", &s2);
        
        printf("Masukkan panjang sisi ketiga: ");
        scanf("%d", &s3);

        if (s1 >= s2 && s1 >= s3) {
            c = s1; 
            a = s2; 
            b = s3;
        } else if (s2 >= s1 && s2 >= s3) {
            c = s2; 
            a = s1; 
            b = s3;
        } else {
            c = s3; 
            a = s1; 
            b = s2;
        }

        if ((a * a + b * b) == (c * c)) {
            printf("=> Ini adalah Segitiga Siku-Siku.\n");
        } else {
            printf("=> Ini BUKAN Segitiga Siku-Siku.\n");
        }
    }

    return 0;
}