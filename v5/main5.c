#include <stdio.h>
#include <stdlib.h>

//ex 2)
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(){
//   int linA,colA;

//   printf("Tamanho da matriz A:\n");

//   scanf("%d", &linA);
//   scanf("%d", &colA);

//   printf("Matriz A:\n");

//   double vet1[linA][colA];

//   for (int i=0; i <linA; i++) {
//     for (int j=0; j < colA; j++) {
//       scanf("%lf", &vet1[i][j]);
//     }
//   }
    
//   printf("Digite o vetor com %d coordenadas:\n", colA);

//   int cords[colA];
//   for (int i = 0; i < colA; i++) {
//     scanf("%d", &cords[i]);
//   }

//   printf("Produto de A por v:\n");

//   //matemagica//

//   double cache_math[colA];
//   int count_v = 0;

//   for (int i=0; i < linA; i++) {
//     for (int j=0; j < colA; j++) {
//       cache_math[count_v] += vet1[i][j] * cords[j];
//       if (j == colA-1) {
//         printf("%.4lf\n", cache_math[count_v]);
//         count_v++;
//       }
//     }
//   }

// }





// //ex 3)
// int main(){
// int Lin_A, Col_A, Lin_B, Col_B;
// int i,j,x;

// //tamanho matriz A
// printf("Tamanho da matriz A:\n");
// scanf("%d", &Lin_A);
// scanf("%d", &Col_A);
// double Ma[Lin_A][Col_A];

// //tamanho matriz B
// printf("Tamanho da matriz B:\n");
// scanf("%d", &Lin_B);
// scanf("%d", &Col_B);
// double Mb[Lin_B][Col_B];

// //verificação da multiplicação
// if (Col_A != Lin_B)
// {
//     printf("Dados incorretos.");
// }else
// {
//     printf("Matriz A:\n");
//         for (i = 0; i < Lin_A; i++)
//         {
//              for (j = 0; j < Col_A; j++)
//              {
//                 scanf("%lf", &Ma[i][j]);
//             }
//         } 

//     printf("Matriz B:\n");
//         for (i = 0; i < Lin_B; i++)
//         {
//             for (j = 0; j < Col_B; j++)
//             {
//                 scanf("%lf", &Mb[i][j]);
//             } 
//         }
    
//     double Mab[Lin_A*Col_B][Lin_B*Col_A];

//     printf("Matriz AB:\n");
//         for (i = 0; i < Lin_A; i++)
//         {
//             for (j = 0; j < Col_B; j++)
//             {
//                 Mab[i][j] = 0;
//                 for (x = 0; x < Col_A; x++)
//                     Mab[i][j] += Ma[i][x]*Mb[x][j];
//                 printf(" %3.4lf ", Mab[i][j]);
//                 }
//             printf("\n");
//             }
//         }
//     return 0;
// }


//ex 4)

// #include <stdio.h>
// #include <stdlib.h>

// #define TAM 50

// int main(void){
//     double A[2][2];
//     char v1[TAM];
//     int u[TAM];
//     int v[TAM];
//     int i;
//     int j;
//     int k;
//     int t;
//     int linA = 2, colA = 2;
//     int n ;

//     printf("Mensagem:\n");
//     fgets(v1, TAM, stdin);


//     for(n=0; v1[n] != '\n'; n++)
//     {
//       u[n] = v1[n];
//     }
  
//     if (n % 2 != 0)
//     {
//         u[n] = 32;
//         n++;
//     }


//     printf("Matriz A:\n");
//     for (i = 0; i < linA; i++)
//     {
//        for (j = 0; j < colA; j++)
//            scanf("%lf", &A[i][j]);
//     }

//     printf("Tamanho da mensagem: %d\n", n);

//     printf("Mensagem Cifrada:\n");
//     for (t = 0; t < n/2; t++)
//     {
//         for (i = 0; i < linA; i++)
//         {
//           v[2*t + i] = 0;
//           for (k = 0; k < colA; k++)
//             v[2*t + i] += A[i][k]*u[2*t + k];
//          printf("%d\n",v[2*t + i]);
//         }

//     }

//     return 0;
// }


//ex 5)
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h> 

// /e/DECODAR/
// int main() {
//   int Alin = 2, Acol = 2;
//   int max_vet;
//   printf("Digite o tamanho do vetor:\n");
  
//   scanf("%d", &max_vet);

//   printf("Matriz A:\n");

//   int mA[Alin][Acol];

//   for (int i=0; i < Alin; i++) {
//     for (int j=0; j < Acol; j++) {
//       scanf("%d", &mA[i][j]);
//     }
//   }

//   printf("Mensagem cifrada:\n");

//   int vet[max_vet][Acol];

//   for (int i=0; i < max_vet; i++) {
//     for (int j=0; j < Acol; j++) {
//       scanf("%d", &vet[i][j]);
//     }
//   }


//   printf("Mensagem decifrada:\n");
//   int cache_math = 0;

//   for (int n=0; n < (int)(max_vet * 0.5); n++) {
//     for (int i = 0; i < Alin; i++) {
//       for (int j = 0; j < Acol; j++) {
//         //printf("DEBUG: %d * %d\n", vet[n][j], mA[i][j]);
//         cache_math += (mA[i][j] * vet[n][j]);
//         //printf("%d res: %d\n", j, cache_math);
//         if (j == Acol-1) {
//           printf("%c", cache_math);
//           cache_math = 0;
//         }
//       }
//     }
//   }
// }
