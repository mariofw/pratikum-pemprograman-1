#include <stdio.h>
#include <math.h>

int main(){
    float alas = 5;
    float tinggi = 12;
    float pangkat = 2;
    float miring = pow(alas, pangkat) + pow(tinggi, pangkat);
    float keliling = alas + tinggi + sqrt(miring);
    float luas = alas * tinggi * 1/2;
    
    printf("Diketahui :\n");
    printf("Alas = %.0f\n", alas);
    printf("Tinggi = %.0f\n\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %.0f cm\n", tinggi);
    printf("Sisi B = %.0f cm\n", sqrt(miring));
    printf("Sisi C = %.0f cm\n", alas);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm", luas);

    return 0;
}