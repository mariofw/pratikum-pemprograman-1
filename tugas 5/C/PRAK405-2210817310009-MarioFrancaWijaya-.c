#include <stdio.h>

int main(){
    int a, b, hasil, sum;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = 0; i < a; i++){
        for(int j = i; j >= 0; j--){
            printf("(%d * %d)", j+1, b);
            if(j > 0){
                printf(" + ");
            }
        }
        hasil += (i+1) * b;
        printf(" = %d\n", hasil);
        sum += hasil;
    }
    printf("%d", sum);

    return 0;
}