#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ex 1)
// int main(){
//   char s[50];
  

//   fgets(s, sizeof(s)+1, stdin);
//   int tamanho = (int)strlen(s)-1;
//   printf("%d", tamanho);
//   return 0;
// }

//ex 2) 

// void maiusculas (char *s){
//   fgets(s, sizeof(s)+1, stdin);
//   int tamanho = (int)strlen(s)-1;
//   int isUpper = 0;
//   for (int i=0; i<tamanho; i++) {
//     if (s[i] >= 'A' && s[i] <= 'Z') {
//       isUpper++;
//     }
//   }
//   printf("%d", isUpper);
// }

// int main(){
//   char s[50];
//   maiusculas(s);
// return 0;
// }

//ex 3)
// #include <stdio.h>
// #include <string.h>

// int main (void) {
//   char s[60]; 
//   fgets(s, sizeof(s)+1, stdin);
//   int tamanho = (int)strlen(s);
//   int j = 0;
//   for (int i=0; i<tamanho; i++) {
//     if (s[i] >= 'a' && s[i] <= 'z') {
//       j++;
//     }
//   }
//   printf("%d", j);
//   return 0;
// }

// ex 4)

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main(void) {
//   char s[50];
//   int aux;
//   scanf("%s", s);
//   int tamanho = strlen(s);
//   for(int i = 0; i < tamanho; i++){
//     if(s[i] > 64 && s[i] < 91){
//       aux = s[i] + 32;
//       printf("%c", aux);
//     }
//     else if(s[i] > 96 && s[i] < 123){
//       aux = s[i] - 32;
//       printf("%c", aux);
//     }
//     else{
//       printf("%c", s[i]);
//     }
//   }
//   return 0;
// }

//ex 5)
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main(void) {
//   char s[60];
//   fgets(s, sizeof s, stdin);
//   int tamanho = strlen(s);
//   for(int i = tamanho-2; i >= 0; i--){
//     if(s[i] != '\x0'){
//       printf("%c", s[i]);
//     }
//   }
//   return 0;
// }

//ex 6)
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void) {
//   char s1[60];
//   char s2[60];
//   char s3[100];
//   scanf("%s %s", s1, s2);
//   int n1 = strlen(s1);
//   int n2 = strlen(s2);
//   int nt = n1+n2;

//   int swap = 1;
//   int s1c = 0;
//   int s2c = 0;
//   for (int i = 0; i<nt+1;i++) {

//     if (swap) {
//       s3[i] = s1[s1c++];

//       swap = (n2 == s2c) ? 1 : 0;
//     } else {
//       s3[i] = s2[s2c++];
//       swap = (n1 == s1c) ? 0 : 1;

//     }
//   }
//   printf("%s", s3);

// }