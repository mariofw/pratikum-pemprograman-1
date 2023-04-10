#include <stdio.h>

int main(){
    int angka;

    printf("Masukan bilangan bulat:");
    scanf("%d", &angka);

    if(angka == 0){
        printf("nol");
    } else if(angka < 0){
        printf("negatif");
    } else{
        printf("positif");
    }

    return 0;
}