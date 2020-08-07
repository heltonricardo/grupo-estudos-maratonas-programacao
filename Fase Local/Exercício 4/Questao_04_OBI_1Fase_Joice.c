#include <stdio.h>
#include <stdlib.h>

//função para buscar próxima cidade
int verifica(int tam, int linhas[tam][tam], int partida, int cAtual, int cAnterior, int eAtual, int visitadas){

    //buscando a próxima cidade possível de ir sem pagar
    for(int j=0; j<tam; j++){
        /*
        Verificando se:
        1 - Há linha entre a cidade atual e a j
        2 - O destino não é a cidade visitada anteriormente
        3 - O destino não é a cidade de partida (cidade inicial, pois pode haver ciclos)
        4 - Se a empresa que faz a linha é diferente da anterior
        */
        if(linhas[cAtual][j] != -1 && j != cAnterior && j != partida && eAtual != linhas[cAtual][j]){
            eAtual = linhas[cAtual][j];
            cAnterior = cAtual;
            cAtual = j;

            return 1 + verifica(tam, linhas, partida, cAtual, cAnterior, eAtual, visitadas);
        }
    }
    return visitadas;

}



int main(){
    int N; //número de cidades

    int A; //cidade inicial
    int B; //cidade final
    int E; //empresa 0-RoyalBus e 1-ImperialBus

    int i; //controlador

    // leitura do número de cidades
    scanf("%d", &N);

    //matriz de linhas
    int linhas[N][N];

    //vetor indicando maior número de cidades a partir da cidade x
    int visitadas[N];

    //inicializando as linhas e número de cidades alcancáceis
    for(i=0; i<N; i++){
        for(int j=0; j<N; j++){
            linhas[i][j] = -1; //indica que não há caminho direto entre as cidades i e j
        }
    }

    /*printf("\nLinhas iniciais\n\n");
    for(i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d ", linhas[i][j]);
        }
        printf("\n");
    }*/

    //inicializando o vetor com 0
    for(i=0; i<N; i++) visitadas[i] = 0;

    //leitura das linhas
    for(i=0; i<N-1; i++){
        scanf("%d %d %d", &A, &B, &E);

        //printf("A = %d B = %d E = %d", A, B, E);

        linhas[A-1][B-1] = E;
        linhas[B-1][A-1] = E; //quem faz a linha
    }

    /*printf("\nLinhas\n\n");
    for(i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d ", linhas[i][j]);
        }
        printf("\n");
    }

    printf("Cidades visitadas anteriormentes\n");
    for(i=0; i<N; i++){
        printf("Cidade %d = %d\n", i+1, visitadas[i]);
    }*/


    //inicializando variáveis
    int cidadeAnterior;
    int cidadeAtual;
    int empresaAtual;
    int cidadesVisitadas; //primeira cidade, de saída

    //verificando trajetos que possam ser feitos pagando apenas uma passagem
    //verificando a saída por cada cidade
    for(i=0; i<N; i++){

        cidadesVisitadas = 1; // a cidade inicial é contabilizada

        cidadeAtual = i;
        empresaAtual = -1; //indica que não foi realizado nenhum trajeto anterior com qualquer empresa

        //verificando trajetos intercalados de empresas
        cidadesVisitadas = verifica(N, linhas, i, cidadeAtual, i, empresaAtual, cidadesVisitadas);

        if(cidadesVisitadas > visitadas[i]) visitadas[i] = cidadesVisitadas;

    }

    int maiorNumero = 0;
    for(i=0; i<N; i++){
        if(visitadas[i] > maiorNumero) maiorNumero = visitadas[i];
        printf("Cidade %d = %d\n", i+1, visitadas[i]);
    }

    printf("Maior número de cidades = %d", maiorNumero);

    return 0;
}
