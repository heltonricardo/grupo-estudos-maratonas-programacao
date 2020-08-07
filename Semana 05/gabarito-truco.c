#include <stdio.h>

int main(){
int N, i=0, pos_N=0, vet[10] = {4,5,6,7,11,12,13,1,2,3};
    scanf("%d", &N);
    if(N != 3){
        for(i=0; i<10; i++){
            if(vet[i] == N){
                pos_N = i;
            }
        }
        for(i=0; i<10; i++){
            if(i>pos_N){
                printf("%d ", vet[i]);
            }
        }
    }else{
        printf("0");
    }
    printf("\n");

    return 0;
}
