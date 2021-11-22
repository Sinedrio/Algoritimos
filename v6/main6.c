#include <stdio.h>
#include <stdlib.h>


//ex 1)
//  struct data_{
//   int dia;
//   char mes[10];
//   int ano;
// }Nasc;

// int main(){
//    printf("Digite o dia:\n");
//   scanf("%d", &Nasc.dia);
//   printf("Escreva o mes:\n");
//   scanf("%s", Nasc.mes);
//   printf("Digite o ano:\n");
//   scanf("%d", &Nasc.ano);


//   printf("Data: %d/%s/%d\n", Nasc.dia, Nasc.mes, Nasc.ano);
// }


//ex 2)

// #include <stdio.h>
// #include <stdlib.h>
// struct num{
//   double primeiro, segundo, terceiro;
// }reais;

// int main(){
//   scanf("%lf",&reais.primeiro);
//   scanf("%lf",&reais.segundo);
//   scanf("%lf",&reais.terceiro);
  
//   double aux;

//   if(reais.primeiro > reais.terceiro)
//   {
//     aux = reais.terceiro;
//     reais.terceiro = reais.primeiro;
//     reais.primeiro = aux;
//   }
//   if(reais.primeiro > reais.segundo)
//   {
//     aux = reais.segundo;
//     reais.segundo = reais.primeiro;
//     reais.primeiro = aux;
//   }
//   if(reais.segundo > reais.terceiro)
//   {
//     aux = reais.terceiro;
//     reais.terceiro = reais.segundo;
//     reais.segundo = aux;
//   }
//   printf("%.4lf\n%.4lf\n%.4lf",reais.primeiro, reais.segundo, reais.terceiro);
// }




//ex 4) 
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// struct Ponto{
//     double R;
//     double I;
//   }p; 

// void leiaPonto(struct Ponto *p)
// {
  
//     printf("Digite o valor da parte Real:\n");
// 	  scanf("%lf", &( (*p).R ) );
//     printf("Digite o valor da parte Imaginaria:\n");
// 	  scanf("%lf", &( (*p).I )  );
// 	  printf("%.4lf + (%.4lf)i\n", (*p).R, p->I);
// }

// void soma(struct Ponto z1, struct Ponto z2)
// {
//   printf("\nAdicao\n");

//   double somaR = z1.R + z2.R;
//   double somaI = z1.I + z2.I;

//   printf("Parte Real: %.4lf\n", somaR);
//   printf("Parte Imaginaria: %.4lf\n", somaI);
//   printf("%.4lf + (%.4lf)i", somaR, somaI);
// }

// void produto(struct Ponto z1, struct Ponto z2)
// {
//   printf("\nMultiplicacao\n");

//   double produtoR = (z1.R * z2.R) - (z1.I * z2.I);
//   double produtoI = (z1.R * z2.I) + (z1.I * z2.R);

//   printf("Parte Real: %.4lf\n", produtoR);
//   printf("Parte Imaginaria: %.4lf\n", produtoI);
//   printf("%.4lf + (%.4lf)i", produtoR, produtoI);
// }

// void quociente(struct Ponto z1, struct Ponto z2)
// {
  
//    double a = (z1.R * z2.R) + (z1.I * z2.I);
//    double b = (z1.I * z2.R) - (z1.R * z2.I);
//    double c = (z2.R * z2.R) + (z2.I * z2.I);
//    double quocienteR = a/c;
//    double quocienteI = b/c;

//    printf("Parte Real: %.4lf\n", quocienteR);
//    printf("Parte Imaginaria: %.4lf\n", quocienteI);
//    printf("%.4lf + (%.4lf)i", quocienteR, quocienteI);
// } 

// void modulo(struct Ponto z){
//   printf("\nModulo \n");
//   double mod = sqrt(pow(z.R,2) + pow(z.I, 2));
//   printf("O modulo de %.4lf + (%.4lf)i eh %.4lf ", z.R, z.I, mod);
// }

// void conjugado(struct Ponto z){
//   printf("\nConjugado\n");
//   double conju = z.I*(-1);
//   printf("Parte Real: %.4lf\n", z.R);
//   printf("Parte Imaginaria: %.4lf\n", conju);
//   printf("%.4lf + (%.4lf)i", z.R, conju);
// }


// int menu()
// {
//     puts("");
//     puts("=============");
//     puts("1 - Adicao   ");
//     puts("2 - Multiplicacao  ");
//     puts("3 - Divisao  ");
//     puts("4 - Modulo  z1  ");
//     puts("5 - Modulo  z2  ");
//     puts("6 - Conjugado  z1  ");
//     puts("7 - Conjugado  z2  ");
//     puts("0 - Sair  ");
//     printf("opcao => ");
//     int op;
//     scanf("%d", &op);

//     return op;
// }



// int main(void)
// {
// 	struct Ponto z1;
// 	struct Ponto z2;

// 	leiaPonto( &z1 );
// 	leiaPonto( &z2 );

//     int op = menu();
//     if(op == 1)
//     {
//         soma(z1, z2);
//     }
//     else if(op == 2)
//     {
//         produto(z1, z2);
//     }
//     else if(op == 3)
//     {
//         quociente(z1, z2);
//     }
//     else if(op == 4)
//     {
//         modulo(z1);
//     }
//     else if(op == 5)
//     {
//         modulo(z2);
//     }
//     else if(op == 6)
//     {
//         conjugado(z1);
//     }
//     else if(op == 7)
//     {
//         conjugado(z2);
//     }

// 	return 0;
	
// }
    
	
