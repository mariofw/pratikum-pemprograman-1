#include <stdio.h>

int main(){
    float jari, tinggi, volume, luas, keliling; 
    
    printf("Masukan nilai jari-jari\t:");
    scanf("%f", &jari);
    printf("Masukan nilai tinggi\t:");
    scanf("%f", &tinggi);

    volume = 22 * tinggi * (jari * jari) /7;
    luas = 2 * 22 * jari * (jari + tinggi) / 7;
    keliling = 2 * 22 * jari / 7;

    printf("OUTPUT\n");
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f", keliling);

    return 0;
}