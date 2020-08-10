#include <stdio.h>

int main(){
int aux=0; //declarando variável de soma dos caracteres;

    while(1){ //laço para contagem de todos os caracteres;
        char N;
        scanf("%c", &N); //leitura de N;
        if(N == '\0' || N == '\n') break; //condição de parada;
        aux += N - '0'; //somando o número aos outros;
    }
printf("%d\n", aux%3); //verificando divisibilidade por 3;
}
