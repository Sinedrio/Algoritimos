#include <stdio.h>
#include <stdlib.h>

//17 de Agosto 2021
// ex de treino1
// int main(){
//     for (int num = 0;num <= 100;num=num+3){
//     printf("%d\n", num);
//     }
// }

//ex de treino2
// int main(){
//   int i;
//   double num,soma;
//   for(i=1; i<=4; i++){
//     printf("Entre a nota da prova %d:\n", i);
//     scanf("%lf", &num);
//     soma+=num;
//   }
//   printf("A media eh %.2f",soma/4);
// }

//ex Lab2
//1)
// int main(){
//     int a,b,menor,maior;
//         scanf("%d",&a);
//         scanf("%d",&b);

//     menor = a;  

//     if (b<a){
//         menor = b;
//         maior = a;
//     }

//     printf("%d %d", menor,maior);
    
//     return 0;
// }

//2)
// int main(){
//     int a,b,c, primeiro,segundo,terceiro;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);

//   if (a < b && a < c && b < c){
//     primeiro= a;
//     segundo=b;
//     terceiro=c;
//   }
//   else if(b < a && b < c && a < c){
//     primeiro= b;
//     segundo=a;
//     terceiro=c;
//   }
//   else if(b < a && b < c && c < a){
//     primeiro= b;
//     segundo=c;
//     terceiro=a;
//   }
//   else if(a < b && a < c && c < b){
//     primeiro= a;
//     segundo=c;
//     terceiro=b;
//   }
//   else if(c < a && c < b && a < b){
//     primeiro= c;
//     segundo=a;
//     terceiro=b;
//   }
//   else{
//     primeiro= c;
//     segundo=b;
//     terceiro=a;
//   }
//   printf("%d %d% d",primeiro,segundo,terceiro);
//   return 0;
// }

//3)
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int a,b,c,d, primeiro,segundo,terceiro,quarto;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);
//     scanf("%d",&d);
//     // (a) como primeiro
//     if (a < b && a < c && a < d && b < c && b < d && c < d){
//       primeiro= a;
//       segundo=b;
//       terceiro=c;
//       quarto=d;
//     }
//     else if(a < b && a < c && a < d && b < c && b < d && d < c){
//       primeiro=a;
//       segundo=b;
//       terceiro=d;
//       quarto=c;
//     }
//     else if(a < b && a < c && a < d && c < b && c < d && b < d){
//       primeiro=a;
//       segundo=c;
//       terceiro=b;
//       quarto=d;
//     }
          
//     else if(a < b && a < c && a < d && c < b && c < d && d < b){
//       primeiro=a;
//       segundo=c;
//       terceiro=d;
//       quarto=b;
//     }
//     else if(a < b && a < c && a < d && d < b && d < c && c < b){
//       primeiro=a;
//       segundo=d;
//       terceiro=c;
//       quarto=b;
//     }
//     else if(a < b && a < c && a < d && d < b && d < c && b < c){
//       primeiro=a;
//       segundo=d;
//       terceiro=b;
//       quarto=c;
//     }
//     // (b) como primeiro
//     else if (b < a && b < c && b < d && a < c && a < d && c < d){
//       primeiro= b;
//       segundo=a;
//       terceiro=c;
//       quarto=d;
//     }
//     else if(b < a && b < c && b < d && a < c && a < d && d < c){
//       primeiro=b;
//       segundo=a;
//       terceiro=d;
//       quarto=c;
//     }
//     else if(b < a && b < c && b < d && c < a && c < d && a < d){
//       primeiro=b;
//       segundo=c;
//       terceiro=a;
//       quarto=d;
//     }
//     else if(b < a && b < c && b < d && c < a && c < d && d < a){
//       primeiro=b;
//       segundo=c;
//       terceiro=d;
//     }
//     else if(b < a && b < c && b < d && d < a && d < c && c < a){
//       primeiro=b;
//       segundo=d;
//       terceiro=c;
//       quarto=a;
//     }
//     else if(b < a && b < c && b < d && d < a && d < c && a < c){
//       primeiro=b;
//       segundo=d;
//       terceiro=a;
//       quarto=c;
//     }
//     //(c)como primeiro
//     else if (c < a && c < b && c < d && a < b && a < d && b < d){
//       primeiro= c;
//       segundo=a;
//       terceiro=b;
//       quarto=d;
//     }
//     else if(c < a && c < b && c < d && a < b && a < d && d < b){
//       primeiro=c;
//       segundo=a;
//       terceiro=d;
//       quarto=b;
//     }
//     else if(c < a && c < b && c < d && b < a && b < d && a < d){
//       primeiro=c;
//       segundo=b;
//       terceiro=a;
//       quarto=d;
//     }
//     else if(c < a && c < b && c < d && b < a && b < d && d < a){
//       primeiro=c;
//       segundo=b;
//       terceiro=d;
//       quarto=a;
//     }
//     else if(c < a && c < b && c < d && d < a && d < b && b < a){
//       primeiro=c;
//       segundo=d;
//       terceiro=b;
//       quarto=a;
//     }
//     else if(c < a && c < b && c < d && d < a && d < b && a < b){
//       primeiro=c;
//       segundo=d;
//       terceiro=a;
//       quarto=b;
//     }
//     //(d)como primeiro
//     else if (d < a && d < b && d < c && a < b && a < c && b < c){
//       primeiro= d;
//       segundo=a;
//       terceiro=b;
//       quarto=c;
//     }
//     else if(d < a && d < b && d < c && a < b && a < c && c < b){
//       primeiro=d;
//       segundo=a;
//       terceiro=c;
//       quarto=b;
//     }
//     else if(d < a && d < b && d < c && b < a && b < c && a < c){
//       primeiro=d;
//       segundo=b;
//       terceiro=a;
//       quarto=c;
//     }
//     else if(d < a && d < b && d < c && b < a && b < c && c < a){
//       primeiro=d;
//       segundo=b;
//       terceiro=c;
//       quarto=a;
//     }
//     else if(d < a && d < b && d < c && c < a && c < b && b < a){
//       primeiro=d;
//       segundo=c;
//       terceiro=b;
//       quarto=a;
//     }
//     else if(d < a && d < b && d < c && c < a && c < b && a < b){
//       primeiro=d;
//       segundo=c;
//       terceiro=a;
//       quarto=b;
      
//     }
  
//   printf("%d %d %d %d",primeiro,segundo,terceiro,quarto);
//   return 0;
// }

//4)
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int num1,num2,num3;
    
//     scanf("%d", &num1);
//     scanf("%d", &num2);
//     scanf("%d", &num3);
    
//     while (num2 != num3){
//         num2 ++;
//         if(num2 % num1 == 0){
//             printf("%d ", num2);
//         }
//     }
// }

//5)
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
    
//    int Num, Num1,Num2,Num3,Num4,Num5,Num6;
//    scanf("%d",&Num);
//    if (Num > 0 && Num < 10000){
//       Num1 = Num/1000;
//       Num2 = (Num - (Num1*1000))/100;
//       Num3 = (Num - (Num2*100) - (Num1*1000))/10;
//       Num4= (Num - (Num2*100) - (Num1*1000))%10;
//       if(Num4!=0){
//         printf("%d%d%d%d",Num4,Num3,Num2,Num1);
//       }
//       else{
//         printf("%d%d%d",Num3,Num2,Num1);
//       }
//    }
//     else if(Num > 10000 && Num < 100000){
//       Num1 = Num/10000;
//       Num2 = (Num - (Num1*10000))/1000;
//       Num3 = (Num - (Num2*1000) - (Num1*10000))/100;
//       Num4= ((Num - (Num2*1000) - (Num1*10000))%100)/10;
//       Num5= ((Num - (Num2*1000) - (Num1*10000))%100)%10;
//       if(Num5 != 0){
//         printf("%d%d%d%d%d",Num5,Num4,Num3,Num2,Num1);
//       }
//       else{
//         printf("%d%d%d%d",Num4,Num3,Num2,Num1);
//       }
//     }
//     else{
//       Num1 = Num/100000;
//       Num2 = (Num%100000)/10000;
//       Num3 = ((Num%100000)%10000)/1000;
//       Num4= (((Num%100000)%10000)%1000)/100;
//       Num5= ((((Num%100000)%10000)%1000)%100)/10;
//       Num6= (((((Num%100000)%10000)%1000)%100)%10);
//       if(Num6 != 0){
//         printf("%d%d%d%d%d%d",Num6,Num5,Num4,Num3,Num2,Num1);
//       }
//       else{
//         printf("%d%d%d%d%d",Num5,Num4,Num3,Num2,Num1);
//       }

//     }
   
//   return 0;
// }

//Outra opcao do 5)
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//   int num,inv;
//   scanf("%d",&num);

//   if (num>=0){
//     if (num%10==0){
//         num=num/10;
//     }
//     while (num!=0) {
//       inv=num % 10;
//       num = num/10;
//       printf("%d",inv);
//     }
//   }
// }

//6)
//condicao de existencia de um Triangulo.
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int num1,num2,num3;

//     scanf("%d", &num1);
//     scanf("%d", &num2);
//     scanf("%d", &num3);

//     if (num1 + num2 > num3){
//         if (num2 + num3 > num1){
//             if (num3 + num1 > num2){
//                 printf("S");
//             }
//         }else{
//             printf("N");
//         }
//     }else{
//         printf("N");
//     }

// }

//7)
// #include <stdio.h>
// #include <stdlib.h>


// int main() {
//     int a, b, fibonacci, i, n;

//     a = 0;
//     b = 1;
//     scanf("%d", &n);

//     for(i = 2; i < n; i++) {

//         fibonacci = a + b;
//         a = b;
//         b = fibonacci;

//     }
//     printf("%d", fibonacci);
// }