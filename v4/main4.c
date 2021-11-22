#include <stdio.h>
#include <stdlib.h>
//ex 1)
// int main (){
//   int num;
//   int cache_a = 0;
//   int cache_i = -1;
//   scanf("%d", &num);
//   double lista[num];
//   for (int i=0; i < num;i++) {
//     scanf("%lf", &lista[i]);
//     if (cache_a < lista[i]) {
//       cache_a = lista[i];
//       cache_i = i;
//     }

//   }
//   printf("%d", cache_i);
// }

//ex 2)
// #include <stdio.h>
//     int main()
//     {
//       int n,i,j;
//       scanf("%d",&n);
//       j=n;
//       int vetor[n], vet[n];
//       // printf("Digite %d valores para um vetor: \n",n);
//       for(i=0;i<n;i++)
//       {
//         scanf("%d",&vetor[i]);
//       }
//       // for(i=0;i<n;i++)
//       // {
//       //   printf("%d ",vetor[i]);
//       // }
//       for(i=0;i<n;i++)
//       {
//         vet[i]=vetor[j-1];
//         j--;

//       }
//       // printf("\n\n**Vetor Invertido**\n");
//       for(i=0;i<n;i++)
//       {
//         printf("%d ",vet[i]);
//       }
//       return 0;
//     }

//ex 3)
// #include <stdio.h>
//     int main()
//     {
//       int n;
//       scanf("%d",&n);
//       double vet;
//       // printf("Digite %d valores para um vetor: \n",n);
//       for(int i=0;i<n;i++)
//       {
//         double valor;
//         scanf("%lf",&valor);
//         vet += valor;
//       }
//       double media = vet/n;
//       printf("%.2lf",media);
//       return 0;
//     }

//ex 4)
// #include <stdio.h>
// #include <math.h>
//     int main()
//     {
//       int n;
//       scanf("%d",&n);
//       double vet[]={}, modulo=0;
//       // printf("Digite %d valores para um vetor: \n",n);
//       for(int i=0;i<n;i++)
//       {
//         //o += no modulo esta ali pra pegar as duas variaveis dentro do vetor
//         scanf("%lf",&vet[i]);
//         modulo+=pow(vet[i],2);
//       }
//       double total = sqrt(modulo);
//       printf("Modulo = %.2lf",total);
//       return 0;
//     }

//ex 5)
// #include <math.h>
// #define M_PI  3.14159265358979323846  /* pi */
//     int main()
//     {
//       double r, graus;
//       printf("Digite o angulo em radianos: \n");
//       scanf("%lf",&r);
//       graus= r* (180/M_PI);
//       printf("O angulo de %lf radianos equivale a %.4lf graus.",r,graus);
//       return 0;
//     }

//ex 6)
//PRECISA TERMINAR*
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #define M_PI  3.14159265358979323846  /* pi */
// int main(){
//   int n;
//   scanf("%d",&n);
//   double vetx[n];
//   double vety[n];
//   //se for 2...
//   if(n==2)
//   {
//     for(int i=0; i<n; i++)
//     {
//     scanf("%lf",&vetx[i]);
//     }
//     for(int i=0; i<n; i++)
//     {
//     scanf("%lf",&vety[i]);
//     }
//     double pe,  mx, my, mt, total1;
//     pe = (vetx[0]*vety[0]) + (vetx[1]*vety[1]);
//     mx = sqrt((pow(vetx[0],2) + pow(vetx[1],2)));  
//     my = sqrt((pow(vety[0],2)+ pow(vety[1],2)));
//     mt = mx * my;
//     total1= pe/mt;
//     printf("Angulo entre os vetores: %.4lf graus.",acos(total1)*(180/M_PI));
//   }
//   //se for 3...
//   else
//   {
//     for(int i=0; i<n; i++)
//     {
//     scanf("%lf",&vetx[i]);
//     }
//     for(int i=0; i<n; i++)
//     {
//     scanf("%lf",&vety[i]);
//     }
//     double pe2, mx2, my2, mt2,total2;
//     pe2 = (vetx[0]*vety[0]) + (vetx[1]*vety[1]) + (vetx[2]*vety[2]);
//     mx2 = sqrt((pow(vetx[0],2)+ pow(vetx[1],2)+ pow(vetx[2],2)));
//     my2 = sqrt(pow(vety[0],2)+ pow(vety[1],2)+ pow(vety[2],2));
//     mt2 = mx2 * my2;
//     total2= pe2/mt2;
//     printf("Angulo entre os vetores: %.4lf graus.",acos(total2)*(180/M_PI));
//   }
// }

//ex 7)
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//   double vetx[3];
//   double vety[3];
  

//   for(int i=0; i<3; i++)
//   {
//     scanf("%lf",&vetx[i]);
//   }
//   for(int i=0; i<3; i++)
//   {
//     scanf("%lf",&vety[i]);
//   }

//   double x1, x2, x3;
  
//   x1 = vetx[1]*vety[2] - vetx[2]*vety[1];
//   x2 = vetx[2]*vety[0] - vetx[0]*vety[2];
//   x3 = vetx[0]*vety[1] - vetx[1]*vety[0];

//   printf("Produto Vetorial = (%.2lf, %.2lf, %.2lf)\n", x1, x2, x3);


// }

//ex 8)
// #include <stdlib.h>
// #include <stdio.h>
// #include <math.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     double vetx[n], vety[n], menor, maior,MenorDist, MaiorDist;
    
//     for( int i=0; i<n; i++)
//     {
//         scanf("%lf",&vetx[i]);
//     }
//     for( int i=0; i<n; i++)
//     {
//         scanf("%lf",&vety[i]);
//     }

//     //Puxando o primeiro
//     menor=fabs(vetx[0]-vety[0]);
//     for(int i=0; i<n;i++)
//     {
//       for(int j=0; j<n;j++)
//       {
//         MenorDist= fabs(vetx[i] - vety[j]);
//         if(MenorDist < menor)
//         { 
//           menor=MenorDist;
//       }
//       }
//     }
//     maior=fabs(vetx[0]-vety[0]);
//     for(int i=0; i < n;i++)
//     {
//       for(int j=0; j < n;j++)
//       {
//         MaiorDist= fabs(vetx[i] - vety[j]);
//         if(MaiorDist > maior)
//         { 
//           maior=MaiorDist;
//       }
//       }
//     }

    
//     printf("Menor Distancia: %.2lf\n",menor);
//     printf("Maior Distancia: %.2lf",maior);
    
// }

//ex 9)
// #include <stdlib.h>
// #include <stdio.h>
// #include <math.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     double vetx[n], menor, maior,MenorDist, MaiorDist;
    
//     for( int i=0; i<n; i++)
//     {
//         scanf("%lf",&vetx[i]);
//     }
  

//     //Puxando o primeiro
//     menor=fabs(vetx[0]);
//     for(int i=0; i<n;i++)
//     {
//       for(int j=i+1; j<n;j++)
//       {
//         MenorDist= fabs(vetx[i]- vetx[j]);
//         if(MenorDist < menor)
//         { 
//           menor=MenorDist;
//       }
//       }
//     }
//     maior=fabs(vetx[0]);
//     for(int i=0; i < n;i++)
//     {
//       for(int j=i+1; j < n;j++)
//       {
//         MaiorDist= fabs(vetx[i] - vetx[j]);
//         if(MaiorDist > maior)
//         { 
//           maior=MaiorDist;
//       }
//       }
//     }

    
//     printf("Menor Distancia: %.2lf\n",menor);
//     printf("Maior Distancia: %.2lf",maior);
    
// }

//ex 10)
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int n,num;
  

//     scanf("%d",&n);
//     int vetor[n];

//     for (int i=0; i < n; i++)
//     {
//         scanf("%d", &vetor[i]);
//     }
//     printf("Busca: ");
//     scanf("%d",&num);
//     int z;
//     for ( z = 0; z <= num ;z++ )
//     {
//         if (vetor[z] == num)
//         {
//             printf("%d ", z);
//             break;
//         }
//     }
//     if (vetor[z] != num)
//         {
//         printf("-1");
//         }
//     return 0;
// }


