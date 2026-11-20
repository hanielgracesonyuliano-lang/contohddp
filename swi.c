#include<stdio.h>

int main()
{
    int i;
    int j;
    int pilihan;
    printf("Mau cetak yang mana ?"); printf("\n");
    printf("pilih 1 untuk mencetak kotak");printf("\n");
    printf("pilih 2 untuk mencetak segitiga");printf("\n");
    printf("pilih 3 untuk mencetak segitiga terbalik");printf("\n");
    printf("Pilihan anda :"); scanf("%i",&pilihan);
    switch(pilihan){
        case 1:
            for (j=1;j<=4;j++){ printf("*");} printf("\n");
            printf("*");printf(" ");printf(" ");printf("*");printf("\n");
            printf("*");printf(" ");printf(" ");printf("*");printf("\n");
            for (j=1;j<=4;j++){ printf("*");} printf("\n");
            break;
        case 2:
            for (j=1;j<=4;j++){
            for(i=1;i<=j;i++) printf("*"); printf("\n");}
            break;
        case 3:
            for (j=1;j<=4;j++){
                for(i=1;i<=4-j;i++) printf(" ");
                for(i=1;i<=j;i++) printf("*");
                printf("\n");
            }
        
        return 0;
    }
}