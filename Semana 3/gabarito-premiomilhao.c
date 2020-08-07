#include <stdio.h>

int main(){
int N, i, soma=0, dias=0;
    scanf("%d", &N);
    int A[N];

    for(i=0; i<N; i++){
        scanf("%d", &A[i]);
        if(soma<1000000){
            dias++;
            soma += A[i];
        }
    }

    printf("%d\n", dias);

    return 0;
}
