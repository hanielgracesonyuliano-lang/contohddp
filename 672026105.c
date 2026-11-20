#include <stdio.h>

int main() {
    char karakter;

    printf("Masukkan karakter: ");
    scanf("%c", &karakter);

    for (int i = 1; i <= 6; i++) {
            printf("%d%c ", i ,karakter);
    }

 printf("\n");
 
    return 0;
}