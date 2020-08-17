#include <stdio.h>

int main(){
int L=1 , C=1, i=0, aux=0;
int total[10000];
	while(L + C != 0){
        scanf("%d %d", &L, &C);
         if(L==C){
            if(L%2==0){
                total[i] = (L/2)*(L/2);
            }else{
                L= L+1;
                total[i] = (L/2)*(L/2);
            }
         }else{
            if(L%2==1){
                L++;
            }
            if(C%2==1){
                C++;
            }
            total[i] = (L/2)*(C/2);
         }
        i++;
	}
	for(aux=0; aux<(i-1); aux++){
        printf("%d\n", total[aux]);
	}
}
