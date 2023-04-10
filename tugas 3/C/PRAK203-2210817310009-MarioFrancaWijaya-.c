#include <stdio.h>

int main(){
    float a, b, i, j, x, y;

    printf("Masukan Nilai a\t:");
    scanf("%f", &a);
    printf("Masukan Nilai b\t:");
    scanf("%f", &b);
    printf("Masukan Nilai i\t:");
    scanf("%f", &i);
    printf("Masukan Nilai j\t:");
    scanf("%f", &j);
    printf("Masukan Nilai x\t:");
    scanf("%f", &x);
    printf("Masukan Nilai y\t:");
    scanf("%f", &y);
    printf("OUTPUT:\n");
    printf("%.3f", (a - b) * i / j - (x + y));

    return 0;
}