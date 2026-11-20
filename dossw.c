#include <stdio.h>

int main() {
    int i;
    int j;
    int pilihan;

    printf("bilangan and (1-5): ");
    scanf("%d", &pilihan);
    switch (pilihan) {
        case 1:
            printf("satu");
            break;
        case 2:
            printf("dua");
            break;
        case 3:
            printf("tiga");
            break;
        case 4:
            printf("empat");
            break;
        case 5:
            printf("lima");
            break;
        case 6:
            printf("enam");
            break;
        default:
            printf("Pilihan anda salah");
    }

    return 0;
}
