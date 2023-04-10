#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, luas, keliling;

    printf("Masukan nilai A =");
    scanf("%d", &a);
    printf("Masukan nilai B =");
    scanf("%d", &b);
    c = sqrt(b * b - a * a);
    luas = 0.5 * c * a;
    keliling = a + b + c;
    printf("\nOUTPUT\n");
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    printf("keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2", luas);

    return 0;
}