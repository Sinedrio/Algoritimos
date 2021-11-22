#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//metodo 1 matriz

// Ex 1)
// struct Arrays {
//   int *x1, *x2, *x3; //main arrays
//   int qtd;  //Uniao size
//   int iqtd; //Intersect size
// } Array;

// int* UnionOrIntersect(int EnableUnion, int tam1, int tam2, int *vet1, int *vet2, int *quant, int *itcquant) {

// #ifndef DEBUG
//     //Vetor x1//
//     for (int i=0; i < tam1; i++) {
//       printf("Valor do x1 na posição %d: ", i+1);
//       scanf("%d", &vet1[i]);
//     }  
//     printf("Valor do vetor x1: { ");
//     for(int i=0; i < tam1 ;i++) {
//       printf("%d ", vet1[i]);
//     }; printf("}\n");

//     //Vetor x2//
//     for (int i=0; i < tam2; i++) {
//       printf("Valor do x2 na posição %d: ", i+1);
//       scanf("%d", &vet2[i]);
//     }
    
//     printf("Valor do vetor x2: { ");
//     for(int i=0; i < tam2 ;i++) {
//       printf("%d ",vet2[i]);
//     }; printf("}\n");
//   #endif

//   //**Parte 2**//
//   int vtotal = tam1+tam2;
//   int *vetMerge;
//   int *Intersect = malloc(1 * sizeof(int)); // memoria minima. (realloc foi utilizado)
//   int *vetUnion  = malloc(1 * sizeof(int)); // memoria minima. (realloc foi utilizado)

//   if (EnableUnion) {
//     //Remover elementos repitidos na propria array.
//     for (int v=0; v<2;v++) {
//       int* sVet = (v == 0) ? vet1 : vet2;
//       int* sLoop = (v == 0) ? &tam1 : &tam2;
//       for (int i=0; i < (*sLoop);i++) {
//         for (int k=0; k < (*sLoop);k++) {
//           if (sVet[i] == sVet[k] && i != k) {
//             for(int n=k; n < (*sLoop)-1; n++) {
//               //printf("Switch POS: i=%d %d\n", n, sVet[n]);
//               sVet[n] = sVet[n + 1];
//             };
//             (*sLoop)--;
//           };
//         };
//       };
//     }; 
//     //**Parte 3 (Union)**//
//     vtotal = tam1+tam2;
//     vetMerge = malloc(vtotal * sizeof(int));
//     //Adiciona as duas arrays em uma unica array.
//     for (int i=0; i < vtotal; i++) {
//       vetMerge[i] = (i < tam1) ? vet1[i] : vet2[i % tam2];;
//     }    

//     printf("\nMERGE: ");
//     for (int i=0; i<vtotal;i++) {
//       printf("%d ", vetMerge[i]);
//     }
//     puts("");


//     //verifica se numero é igual, se for ele nao avança o indice do print
//     for (int i = 0; i < vtotal;i++) {
//       vetUnion = realloc(vetUnion, (1 + (*quant)) * sizeof(int));
//       vetUnion[(*quant)] = vetMerge[i];
//       if (vetMerge[i] != vetMerge[i+1]) {
//         (*quant)++;    
//       }
//     }
//   } else {
//     //Intersection core
//     for (int i=0; i<tam1; i++) {
//       for (int k=0; k<tam2; k++) {
//         if (vet1[i] == vet2[k]) {
//           Intersect = realloc(Intersect, (1 + (*itcquant)) * sizeof(int));
//           Intersect[(*itcquant)++] = vet1[i]; 
//           break;
//         }
//       }
//     }
//   }

//   return (EnableUnion ? vetUnion : Intersect);
// }


// // Ex 1)
// int main(){
//   int EnableUnion = 0; //Exercicio 1) = 1 | Exercicio 2) = 0
//   int n1,n2;
  
//   #ifdef DEBUG
//     puts("--DEBUG MODE ON--");
//     n1= 9; Array.x1[9] = {1,3,3,5,2,8,8,8,1};
//     n2= 10; Array.x2[10] = {1,3,6,3,3,2,5,9,1,0};
//   #else
//     printf("Tamanho do Vetor x1: "); scanf("%d",&n1);
//     printf("Tamanho do Vetor x2: "); scanf("%d",&n2);

//     Array.x1 = malloc(n1 * sizeof(int));  // x1 memoria maxima.
//     Array.x2 = malloc(n2 * sizeof(int));  // x2 memoria maxima.
//   #endif

//   Array.x3 = malloc(n1+n2 * sizeof(int)); // x3 memoria maxima.

//   //Retorna array x3 sendo Uniao ou Intersecção (Ex. 1 ou 2)
//   Array.x3 = UnionOrIntersect(EnableUnion, n1, n2, Array.x1, Array.x2, &Array.qtd, &Array.iqtd);
//   int QtdUse = (EnableUnion ? Array.qtd : Array.iqtd);

//   puts("---------------------");
//   printf("%s entre x1 e x2 é: ", EnableUnion ? "Uniao" : "Intersecção");
//   for (int i=0;i < QtdUse; i++){
//     printf("%s%d%s", (i == 0) ? "{" : "", Array.x3[i], (i == QtdUse-1) ? "}" : ",");
//   } 
//   puts("\n---------------------");

// }
// //ordena em ordem crescente comparando todos contra todos
//   int ordenado;
//   for (int i = 0; i < count; i++) {
//     for (int j = 0; j < count; j++) {
//       if(vet_x3[i] < vet_x3[j]){
//         ordenado = vet_x3[i];
//         vet_x3[i] = vet_x3[j];
//         vet_x3[j] = ordenado;
//       }
//     }
//   }
// //verifica se numero é igual, se for ele nao avança o indice do print
//   for (int i = 0; i < count;i++) {
//     vet_final[cou] = vet_x3[i];
//     if (vet_x3[i-1] != vet_x3[i]) {
//       cou++;
//     } 
//   }

//   printf("Valor do vetor x3: ");
//   for (int i=0;i < cou;i++){
//     printf("%s%d%s", (i == 0) ? "{" : "", vet_final[i], (i == cou-1) ? "}" : ",");
//   } 

// }

//ex 3)
// void ler(int n, int vet[n]){
//   int i;
//   for( i=0; i < n; i++)
//   {
//     printf("Qual sera o valor da posição %d? ",i+1);
//     scanf("%d",&vet[i]);
//   }
// }
// int main(){
//   int n;

//   printf("Qual sera a quantidade dos elementos? ");
//   scanf("%d", &n);
//   int *vetx_n; //ptr 4 bytes
//   vetx_n = malloc(n * sizeof(int));
//   ler(n,vetx_n);

//   for (int i=0; i<n;i++) {
//     printf("%s%d%s", (i == 0) ? "{" : "", vetx_n[i], (i == n-1) ? "}" : ",");
//   }
// }


//ex 4)
// int main(){
//   int n,i;
//   int Soma_impar = 0;
//   printf("Qual sera a quantidade dos elementos? ");
//   scanf("%d", &n);
//   int *vetx_n; //ptr 4 bytes
//   vetx_n = malloc(n * sizeof(int));
  
//   for( i=0; i < n; i++)
//   {
//     printf("Qual sera o valor da posição %d? ",i+1);
//     scanf("%d",&vetx_n[i]);
//   }

//   for (int i=0; i<n;i++)
//     {
// printf("%s%d%s", (i == 0) ? "{" : "", vetx_n[i], (i == n-1) ? "}" : ",");        
//       if (vetx_n[i]%2!= 0){
//             Soma_impar += vetx_n[i];
//        }
//     }
//     printf("\nO resultado da soma dos numeros impares é %d", Soma_impar);
// }

// struct aluno{
//   char nome[30];
//   float media;
//   int faltas;
// };
// int main(){
//   int n,i,j;
//   printf("Qual sera a quantidade de alunos? ");
//   scanf("%d", &n);
//   struct aluno aluno[n];
//   for(i=0; i < n;i++)
//   {
//     printf("------------------------------------------\n");
//     printf("-Coloque o nome, média e faltas aluno %d-", i+1);
//     printf("\nNome do aluno %d: ", i+1);
//     scanf("%s", aluno[i].nome);
//     printf("\nMedia do aluno %d: ", i+1);
//     scanf("%f", &aluno[i].media);
//     printf("\nFaltas do aluno %d: ", i+1);
//     scanf("%d", &aluno[i].faltas);
//     printf("\n------------------------------------------\n\n");
//   };
//   int maior[n],maior_f[n];
//   char maior_n[n];
//   for(i=0; i<n;i++)
//   {
//     for(j=0;j<n;j++)
//     {
//       if(aluno[i].media > aluno[j].media)
//       {
//         maior[i] = aluno[i].media;
//         aluno[i].media= aluno[j].media;
//         aluno[j].media = maior[i];

//         maior_f[i] = aluno[i].faltas;
//         aluno[i].faltas = aluno[j].faltas;
//         aluno[j].faltas = maior_f[i];

//         strcpy(maior_n, aluno[i].nome); //adiciona char em array.
//         strcpy(aluno[i].nome, aluno[j].nome);
//         strcpy(aluno[j].nome, maior_n);
//       }
//     }    
//   };
//   for(i=0;i<n;i++)
//   {
//     printf("Nome: %s\n", aluno[i].nome);
//     printf("Média: %.2f\n", aluno[i].media);
//     printf("Faltas: %d\n", aluno[i].faltas);
//     puts(" ");
//   }
// }

//ex 7)
// void inverte(int n, int vet[n]){

//   for(int i=0; i < n; i++) {
//     printf("Qual sera o valor da posição %d? ",i+1);
//     scanf("%d",&vet[i]);

//   }

//   printf("Inversa: ");
//   for (int i=n-1; i >= 0; i--) {
//     printf("%d ",vet[i]);  
//   }

// }
// int main(){
//   int n;

//   printf("Qual sera a quantidade dos elementos? ");
//   scanf("%d", &n);
//   int *vetx_n; //ptr 4 bytes
//   vetx_n = malloc(n * sizeof(int));
//   inverte(n,vetx_n);
// }


