#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

   int n, i, prime = 1, divisor = 0;

   printf("Enter a positive integer:  ");
   scanf("%d", &n);

    for(i = 2; i*i <= n; ++i)
    {
       if(n%i == 0)
       {
           prime = 0;
           divisor = n / i;
           break;
       }
    }


   if(prime == 1){
       printf("%d is a prime number", n);
   }
   else {
       printf("%d is not a prime number\n%d x %d is a factor",n,i,divisor);
   }
   return 0;

}