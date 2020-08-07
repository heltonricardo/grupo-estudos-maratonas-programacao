#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
int N, total;
    scanf("%d",&N);//leitura da peça
    total = ((N+1)*(N+2))/2; //completa o "retangulo de peças" e pega a metade
    printf("%d", total);
}
