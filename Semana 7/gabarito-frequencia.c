#include <stdio.h>

int main(){
int qtd, i, j, aux[2001], n, maior;
    //zerando todas as posi��es do vetor
    for(i=0;i<2001;i++){
        aux[i]=0;
    }

    //leitura da qtd de n�meros que o usuario vai digitar
    scanf("%d", &qtd);

    //leitura dos n�meros e incremento para cada n�mero que for digitado
    //(ex: se digitar 10, a posi��o 10 vai receber +1)
    for(i=0; i<qtd; i++){
        scanf("%d", &n);
        aux[n]++;
    }

    //sa�da dos n�meros que foram digitados e respectivamente, a quantidade de apari��o
    for(i=0; i<2001;i++){
        for(j=0;j<aux[i]; j++){
            if(aux[i]>0 ){
                printf("%d aparece %d vez(es)\n", i, aux[i]);
                break;
            }
        }
    }
}
