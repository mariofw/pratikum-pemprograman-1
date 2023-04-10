#include <stdio.h>
#include <math.h>

int hitung(int number1, int number2){
    return (number1 - number2);
}
int mutlak(int hasil){
    return abs(hasil);
}
int main(){
    int a,b,c,d, hasil;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    hasil = hitung(a,c) + hitung(b,d);
    printf("%d", mutlak(hasil));
}