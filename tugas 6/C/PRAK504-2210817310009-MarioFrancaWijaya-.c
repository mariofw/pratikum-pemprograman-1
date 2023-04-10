#include <stdio.h>

int reverse(int a){
    int reversed = 0;
    while(a!=0){
        reversed = reversed * 10;
        reversed = reversed + a%10;
        a = a/10;
    }
    return reversed;
}
int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int c =  A + B;
    printf("%d", reverse(c));
}