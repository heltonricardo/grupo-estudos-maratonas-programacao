#include <stdio.h>

int main(){
int N, K, i=0, j=0, classifica=0, aux=0;
    scanf("%d", &N);
    scanf("%d", &K);

int verifica[N];

    for(i=0; i<N; i++){
        scanf("%d", &verifica[i]);
    }
    classifica += K;
   for(i=1; i<N; i++){
        for(j=i+1; j<N; j++){
            if(verifica[i]==verifica[j] && verifica[i]==verifica[K-1]){
                classifica++;
                break;
            }
        }
    }
    printf("%d\n", classifica);
}
