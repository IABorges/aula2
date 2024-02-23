#include <stdio.h>




int soma(int a, int b){
   return a * b;
}




int main(){

   int a  ;
   int b ;
   printf("Eai\n");
   printf("Digita ai malandro\n");
   scanf("%d",&a);

   printf("Digita outro numero comedia\n");
   scanf("%d",&b);
   int z = soma(a,b);
   printf("%d * %d = %d", a,b,z);

}





