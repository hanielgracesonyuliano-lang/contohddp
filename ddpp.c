#include <stdio.h>

int main(){
    int i,j;

    //persegi
    for (i = 1; i <= 4; i++){
        for (j = 1; j <= 4; j++){
            if (i == 1 || i == 4 || j == 1 || j == 4){
                printf("*");
            }else{
                printf(" ");
        }
        }  printf("\n");
    }
printf("\n");
    //segitiga kanan
for (i=1;i<=4;i++){
    for (j=1;j<=4;j++){
            printf("*");
    printf("\n");
}
printf("\n");
}
//segitiga kiri
for (j=1;j<=4;j++){
    for (i=1;i<=4;i++){
        printf(" ");
    }for (i=1;i<=j;i++){
        printf("*");
    }
        printf("\n");
    }

return 0;
}
