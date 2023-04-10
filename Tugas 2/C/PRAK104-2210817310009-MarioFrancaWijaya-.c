#include <stdio.h>

int main(){
    float sepatuA = 400000;
    float sepatuB = 350000;
    float diskon1 = 0.13;
    float diskon2 = 0.21;

    printf("Harga sepatu A adalah %0.f\n", sepatuA);
    printf("Harga sepatu B adalah %0.f\n", sepatuB);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", sepatuA - ( sepatuA * diskon1));
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f", sepatuB - (sepatuB * diskon2));

    return 0;
}