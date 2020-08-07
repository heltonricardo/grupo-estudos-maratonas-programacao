#include <stdio.h>

int main(){
int qtd, i, j, aux[2001], n, maior;
    //zerando todas as posições do vetor
    for(i=0;i<2001;i++){
        aux[i]=0;
    }

    //leitura da qtd de números que o usuario vai digitar
    scanf("%d", &qtd);

    //leitura dos números e incremento para cada número que for digitado
    //(ex: se digitar 10, a posição 10 vai receber +1)
    for(i=0; i<qtd; i++){
        scanf("%d", &n);
        aux[n]++;
    }

    //saída dos números que foram digitados e respectivamente, a quantidade de aparição
    for(i=0; i<2001;i++){
        for(j=0;j<aux[i]; j++){
            if(aux[i]>0 ){
                printf("%d aparece %d vez(es)\n", i, aux[i]);
                break;
            }
        }
    }
}
