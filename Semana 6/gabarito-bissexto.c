#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
int ano[20], aux=0, x=0, i=0, verifica=0, verifica2=0;

    do{
        //leitura dos anos, at� o usu�rio digitar um ano inv�lido
        scanf("%d", &ano[aux]);
        aux++;
        x = aux-1;
    }while (ano[x]>=2000);

    for(i=0; i<aux-1; i++){
        //zerando a vari�vel de verifica��o
        verifica2=0;
        if(ano[i]%4==0 && ano[i]%100 != 0){
            //verifica��o de ano bissexto divis�vel por 4 e n�o divis�vel por 100
            printf("Este � o ano bissexto.\n");
            //incremento nas vari�veis verifica, para saber que a condi��o foi aceita
            verifica++;
            verifica2++;
        }else if(ano[i]%400 == 0){
            //verifica��o de ano bissexto divis�vel por 400
            printf("Este � o ano bissexto.\n");
            //incremento na vari�veis verifica, para saber que a condi��o foi aceita
            verifica++;
            verifica2++;
        }
        if(ano[i]%15 == 0){
            //verifica��o de ano com Festival de Huluculu
            printf("Este � o ano do festival huluculu.\n");
            //incremento na vari�vel verifica, para saber que a condi��o foi aceita
            verifica2++;
        }if(ano[i]%55 == 0 && verifica>0){
            printf("Este � o ano do festival Bulukulu.\n");
            //incremento na vari�vel verifica, para saber que a condi��o foi aceita
            verifica2++;
        }
        //verifica��o de ano comum (caso nenhuma das op��es foram verdadeiras)
        if(verifica2 == 0){
            printf("Este � um ano comum.");
        }else{
            printf("\n");
        }
    }
    return 0;
}
