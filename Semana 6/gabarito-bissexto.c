#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
int ano[20], aux=0, x=0, i=0, verifica=0, verifica2=0;

    do{
        //leitura dos anos, até o usuário digitar um ano inválido
        scanf("%d", &ano[aux]);
        aux++;
        x = aux-1;
    }while (ano[x]>=2000);

    for(i=0; i<aux-1; i++){
        //zerando a variável de verificação
        verifica2=0;
        if(ano[i]%4==0 && ano[i]%100 != 0){
            //verificação de ano bissexto divisível por 4 e não divisível por 100
            printf("Este é o ano bissexto.\n");
            //incremento nas variáveis verifica, para saber que a condição foi aceita
            verifica++;
            verifica2++;
        }else if(ano[i]%400 == 0){
            //verificação de ano bissexto divisível por 400
            printf("Este é o ano bissexto.\n");
            //incremento na variáveis verifica, para saber que a condição foi aceita
            verifica++;
            verifica2++;
        }
        if(ano[i]%15 == 0){
            //verificação de ano com Festival de Huluculu
            printf("Este é o ano do festival huluculu.\n");
            //incremento na variável verifica, para saber que a condição foi aceita
            verifica2++;
        }if(ano[i]%55 == 0 && verifica>0){
            printf("Este é o ano do festival Bulukulu.\n");
            //incremento na variável verifica, para saber que a condição foi aceita
            verifica2++;
        }
        //verificação de ano comum (caso nenhuma das opções foram verdadeiras)
        if(verifica2 == 0){
            printf("Este é um ano comum.");
        }else{
            printf("\n");
        }
    }
    return 0;
}
