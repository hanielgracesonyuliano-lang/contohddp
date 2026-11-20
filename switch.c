// #include <stdio.h>

// int main() {
    
//     int hari;

//     printf("Masukan hari : ");
//     scanf("%d", &hari);

//     switch (hari) {
//         case 1:
//             printf("Hari senin");
//             break;
//         case 2:
//             printf("Hari selasa");
//             break;
//         case 3:
//             printf("Hari rabu");
//             break;
//         case 4:
//             printf("Hari kamis");
//             break;
//         case 5:
//             printf("Hari jumat");
//             break;
//         case 6:
//             printf("Hari sabtu");
//             break;
//         case 7:
//             printf("Hari minggu");
//             break;
//     }

//   return 0;

// }

//perulangan 

#include <stdio.h>

int main() {
    
    // for (int i = 1; i <= 10; i++) {
    //     printf("%d\n", i);

    // int n =0;
    // while (n <= 5) {
    //     printf("Coba ke -%d\n", n);
    //     n++;
        

    // }
    //     return 0;


// int k = 5;
// while (k < 5) {
//     printf("print\n");
//     k++;
// }   

//     int pilihan = 1;
//     while (pilihan != 0) {      
//         printf("Masukan 0 untuk berhenti : "); 
//         scanf("%d", &pilihan);  
//     }

//     printf("Program berenti\n");
//     int n = 5;

//     do {
//         printf("Coba ke -%d\n", n);
//         n++;
//     } while (n < 5);

//     return 0;
//     }

for (int ab = 0; ab < 5; ab++){
    for (int ba = 0; ba < ab; ba++){
        printf("*");
       
    }
    printf("\n"); 
}
}