#include <stdio.h>
#include <stdlib.h>

//int main(){
  //int* prt;
  //int valor = 10;
  
 // prt = &valor;
  //printf("%p\n",prt);
  //printf("%p", &valor);
  //printf("Valor usando nome = %d\n", valor);
  //printf("Valor usando ponteiro = %d\n", *prt);
//}
// void troca (int *x, int *y){
// int temp;
// temp=*x;
// *x=*y;
// *y=temp;
// }
// int main(){
// int a = 1;
// int b = 2;
// troca(&a, &b);
// printf("%d %d", a,b);
// }

//ex 1)
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h> 

// double Modulo(int tam, double *x){
//   double base;
//   for (int i = 0; i < tam; i++) {
//     base += fabs(pow(*&x[i], 2)); 
//   } 
//   return sqrt(base);
// }

// int main(void){
//   int tam2;
//   int i;
//   scanf("%d", &tam2);
//   double x2[tam2];
//   for(i=0; i < tam2; i++)
//   {
//     scanf("%lf", x2+i);
//   }
//   printf("Modulo = %.4lf\n", Modulo(tam2,*&x2));
// }

//ex 2)
// #include <stdio.h>
// #include <math.h>

// double ProdutoEscalar(int tam, double *x, double *y){
//   double base;
//   for (int i = 0; i < tam; i++) {
//     base += x[i] * y[i];
//   } 
//   return base;
// }

// int main(void) {
//   int tam2;
//   scanf("%d", &tam2);

//   double arrayX[tam2];
//   double arrayY[tam2];

//   for (int i = 0; i < tam2*2; i++) {
//     int resto = i % 3;
//     scanf("%lf", (i < tam2 ? (arrayX + resto) : (arrayY + resto)));
//   }

//   printf("Produto Escalar = %.4lf", ProdutoEscalar(tam2, arrayX, arrayY));
// }

//ex 3)
// #include <stdio.h>
// #include <math.h>
// #define M_PI  3.14159265358979323846  /* pi */

// double arccos(double *tam){
//   double count;
//   count = acos(*tam)*(180/M_PI);
//   return count;
// }

// int main(void) {
//   double x;
//   printf("Digite o valor do arccos: \n");
//   scanf("%lf", &x);

 

//   printf("O arccos de %.4lf eh %.4lf graus.\n", x, arccos(&x));
// }
 
//ex 4)
// #include <stdio.h>
// #include <math.h>
// #define M_PI  3.14159265358979323846  /* pi */

// double difvector(int *tam, double *A, double *B){
//   double modulo_a = 0;
//   double modulo_b = 0;
//   double base = 0;

//   for (int i = 0; i < *tam; i++) {
//     modulo_a += pow(A[i], 2);
//     modulo_b += pow(B[i], 2);
//     base += A[i] * B[i];
//   }
//   double resultado;
//   resultado = base / (sqrt(modulo_a * modulo_b));
//   return acos(resultado)*(180/M_PI);
// }

// int main(void) {
//   int tamanho;
//   scanf("%d", &tamanho);

//   double vetx[tamanho];
//   double vety[tamanho];

//   for (int i = 0; i < tamanho*2; i++) {
//     int resto = i % tamanho;
//     scanf("%lf", (i < tamanho ? (vetx+resto) : (vety+resto)));
//   }

//   printf("Angulo entre os vetores: %.4lf graus.\n", difvector(&tamanho, *&vetx,*&vety));
// }

  // printf("Angulo entre os vetores: %.4lf graus.\n", arccos(&valor));
//}

//ex 5)
// int main(void){
//   int a,b, *ptr;
//   a = 5;
//   b = 3;

//   ptr = &a;
//   *ptr = 10;
//   ptr = &b;
//   *ptr = *ptr + 4;

//   printf("%d\n", *ptr);
//   printf("%d\n", b);
//   printf("%d\n", a);
//   printf("%d\n", a);

// }

//ex 6)
// int main(void){
//   int x = 5;
//   int *ptr;

//   ptr = &x;// #5012

//   printf("%d\n", *ptr);//5
//   printf("%d\n", ptr);//#5012
//   printf("%d\n", &ptr);//#5008
//   printf("%d\n", &*ptr);//#5012
//   printf("%d\n", **&ptr);//5
// //obs:
// //& puxa valor do endereço
// //* puxa valor do conteudo(a variavel)

// }

//ex 7)
// int main(void){
//   int i = 3, j = 5;
//   int *p = &i, *q = &j;

  // if(p==&i){
  //   printf("ópa");
  // }else{
  //   printf("nao");
  // }
  // printf("%d ",3*-*p/ *q + 6);//5 o ultimo só, o resto esta no caderno
// }

