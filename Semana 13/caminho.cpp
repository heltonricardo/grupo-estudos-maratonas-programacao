#include <iostream>

using namespace std;

bool FLAG = false;

void fr(int **MAT, int L, int C, int N, int *VET) {
   VET[L] = 1;
   if (MAT[L][C])
      FLAG = true;
   else
      for (int J = 0; J < N; ++J) {
         if (FLAG) break;
         if (MAT[L][J] and not VET[J])
            fr(MAT, J, C, N, VET);
      }
}

void prm(int **MAT, int N) {
   for (int I = 0; I < N; ++I)
      for (int J = 0; J < N; ++J)
         MAT[I][J] = 0;
}

void prv(int *VET, int N) {
   for (int I = 0; I < N; ++I)
      VET[I] = 0;
}

int main(void) {
   int N, M;
   int S, B;
   int U, V;
   int I, J;
   int **MAT;
   int  *VET;

   cin >> N >> M;
   cin >> S >> B;

   VET = (int *) malloc(N * sizeof(int));
   MAT = (int **) malloc(N * sizeof(int *));

   for (I = 0; I < N; ++I)
      MAT[I] = (int *) malloc(N * sizeof(int));

   prv(VET, N);
   prm(MAT, N);

   for (I = 0; I < M; ++I) {
      cin >> U >> V;
      MAT[U-1][V-1] = 1;
      MAT[V-1][U-1] = 1;
   }

   fr(MAT, S-1, B-1, N, VET);

   if (FLAG) cout << "HA CAMINHO ATE BIRIGUI";
   else cout << "NAO EXISTE CAMINHO";
   cout << endl;

   return 0;
}
