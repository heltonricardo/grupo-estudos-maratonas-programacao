#include <stdio.h>

int main(){
int M, N, i, fatM, fatN;
    scanf("%d", &M);
    scanf("%d", &N);

    for(fatM=1; M>1; M--){
        fatM *= M;
    }
    for(fatN=1; N>1; N--){
        fatN *= N;
    }
    printf("%d\n", fatM+fatN);
}
