#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
int N, total;
    scanf("%d",&N);//leitura da pe�a
    total = ((N+1)*(N+2))/2; //completa o "retangulo de pe�as" e pega a metade
    printf("%d", total);
}
