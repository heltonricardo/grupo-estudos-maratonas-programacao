#include <stdio.h>

int main(){
int aux=0; //declarando vari�vel de soma dos caracteres;

    while(1){ //la�o para contagem de todos os caracteres;
        char N;
        scanf("%c", &N); //leitura de N;
        if(N == '\0' || N == '\n') break; //condi��o de parada;
        aux += N - '0'; //somando o n�mero aos outros;
    }
printf("%d\n", aux%3); //verificando divisibilidade por 3;
}
