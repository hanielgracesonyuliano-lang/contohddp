#include<stdio.h>

int main(){
    int nilai[5] = {10,20,30,40,50};

    // printf("%d", nilai[0]);
    printf("%d", nilai[1]);
    // printf("%d", nilai[2]);
    // printf("%d", nilai[3]);
// printf("Nilai ke-0: %d\n", nilai[1]);
nilai[1] = 100;

    for(int i = 0; i < 5; i++){
        printf("Nilai ke-%d: %d\n", i, nilai[i]);
    }

    return 0;
}