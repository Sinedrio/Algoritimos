#include <stdio.h>
#include <stdlib.h>
// ex 3)
// int main(int n)
// {
//   int d;
//   scanf("%d",&n);
//   d=0;
//   if (n>0)
//   {
//     while (n!=0)
//     {
//         n=n/10;
//         d++;
//     }
    
//   }
//   else{
//     d=1;
//   }
//   return d;
// }

//ex 4)
// #include <math.h>
// int main(){
//     int n,inv, indice,j;
//   scanf("%d",&n);
//   scanf("%d",&indice);
  

//   if (n>=0){
//       for(int j = 0; j <= indice; j++) {
//         int inv=n % 10;
//         n = n/10;
//         if(j==indice){
//           return inv;
//         }   
//     }
//   }
//   return 0;
// }

//ex 5)
// #include <math.h>
// int main(){
//   float a, b, c, delta, x1,x2;
//   scanf("%f",&a);
//   scanf("%f",&b);
//   scanf("%f",&c);

//   delta = pow(b,2)-(4*a*c);
//   x1 = (-b + sqrt(delta)) / (2*a);
//   x2 = (-b - sqrt(delta)) / (2*a);

//   if (x1 > x2){
//       return x1;
//     }
//   else if(x2>x1){
//       return x2;
//     } 
//   else{
//     return 0;
//   }
  
// }

//ex6)
// float main (float b, float h) {
//     return b * h/2;
// }

//ex 7)
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(){
//     int x1,y1;
//     int x2,y2;
//     double raiz;
//     int raiz1;

//     printf("Digite as coordenadas do 1o. ponto: \n");
//     scanf("%d%d", &x1,&y1);
//     printf("Digite as coordenadas do 2o. ponto: \n");
//     scanf("%d%d", &x2,&y2);
//     raiz1 = (((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
//     raiz = sqrt(raiz1);

//     printf("Distancia entre os dois pontos: %.6lf",raiz);


//     return 0;
// }

//ex 8)
// #include <math.h>

// int main(){
//     double x1,x2,x3;
//     double y1,y2,y3;
//     double prod;

//     printf("Digite as coordenadas do 1o vetor: \n");
//     scanf("%lf%lf%lf", &x1,&x2,&x3);
//     printf("Digite as coordenadas do 2o vetor: \n");
//     scanf("%lf%lf%lf", &y1,&y2,&y3);

//     prod = (x1*y1)+(x2*y2)+(x3*y3);

//     printf("Produto Escalar: %.6lf",prod);

//     return 0;
// }



//ex 9)
// #include <math.h>

// int main(){
//     double rad,graus;
//     double pi = 3.14159265358979323846;

//     printf("Digite o angulo em radianos: \n");
//     scanf("%lf", &rad);

//     graus = (rad*(180/pi));
//     printf("O angulo de %.6lf radianos equivale a %.6lf graus.",rad,graus);

//     return 0;
// }

//ex 10)

//ex 11)
// #include<stdio.h>
// #include <locale.h>
 
// int main() {
//     int num, i, resultado = 0;
    
//     printf("Digite um numero inteiro e positivo:\n");
//     scanf("%d", &num);
    
//     for (i = 2; i <= num / 2; i++) {
//         if (num % i == 0) {
//         resultado++;
//         break;
//         }
//     }
    
//     if (resultado == 0)
//         printf("Primo");
//     else
//         printf("Composto");
    
//     return 0;
// }