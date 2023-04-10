#include <stdio.h>

int main(){
    int i,j, angka;
    scanf("%d", &angka);

    for(i=1; i<=angka;i++){
        if(i % 2==0){
        }else{
            printf("%d ", i);
        }
    }
    printf("\n");
    for(j=angka;j>=1;j--){
        if(j % 2 == 0){
            printf("%d ", j);
        }
    }
    
    return 0;
}