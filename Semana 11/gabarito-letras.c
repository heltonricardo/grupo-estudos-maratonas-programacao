#include <stdio.h>
#include <string.h>

int main(){
int N,i,j, vog=0, cons=0;
	scanf("%d", &N);
char x[N][81];

	for(i=0; i<N; i++){
		fflush(stdin);
		gets(x[i]);
	}

	for(i=0;i<N;i++){
		for(j=0;j<strlen(x[i]);j++){
			if(x[i][j]=='a' || x[i][j]=='e' || x[i][j]=='i' || x[i][j]=='o' || x[i][j]=='u'){
				vog++;
			}else if(x[i][j] == '?' || x[i][j] == '!' || x[i][j] == '.' || x[i][j] == ',' || x[i][j] == ' '){
                vog = vog;
                cons = cons;
			}else{
                cons++;
			}
		}
		printf("%d %d\n", vog, cons);
		vog=0;
		cons=0;
	}
}
