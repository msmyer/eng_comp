//
// Created by max on 3/04/19.
//

//  Test 1  Question 1 Sample
/*
#include <stdlib.h>
#include <stdio.h>

#define PIE 3.14159

int

main(int argc, char *argv[]){

    double vol=0,r=0;


    printf("Enter radius (in meters):\n");

    if(scanf("%lf",&r)<=0){
        printf("invalid radius");
        exit(EXIT_FAILURE);
    }
    else {
        vol =(4.0/3)*PIE*(r*r*r);
        printf("The Volume of the sphere %.3lf",vol);

    }

    return(0);
}
*/

//  Test 1  Question 2

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
   int n=4,i;
   double x = 0.675, next=0, sum=0;

while(n!=0){
   for (i=1; i<=n; i++) {
       sum = x / i;
       x = x / 2.0;
       //printf("%lf\n", sum);
   }
    n = n - 1;
    = sum + sum;
    printf("%lf", total_sum);


    }



    return(0);
}


//  Test 2  Question 1 Sample
/*
#include <stdio.h>


int
main(int argc, char *argv[]) {

    int num1, num2, num3, num4, result;
    int n;
    printf("Enter sets of four values, EOF to end\n");

    while (scanf("%d %d %d %d", &num1, &num2, &num3, &num4) == 4) {
        result = num1*num2*num3*num4;
        printf("f on %d and %d and %d and %d gives %d\n",
               num1, num2, num3, num4, result);
        n = n+1;
    }
    printf("%d sets processed\n", n);

    return 0;
}
*/

//  Test 2  Question 2
/*
#include <stdlib.h>
#include <stdio.h>

int is_prime(int val) {

    int prime = 1;

    for (int i = 2; i * i <= val; ++i) {
        if (val % i == 0) {
            prime = 0;
            break;
        }
    }

    if (!prime) {
        return 0;
    } else {
        return 1;
    }
}
 */
/*
//DODGY SUM PRIME ThINGY
int main(int argc, char *argv[]){

    int first, last;
    int sum=0;

    printf("Please enter first prime number ");
    scanf("%d",&first);
    printf("Please enter second prime number");
    scanf("%d",&last);

    if((is_prime(first))==0 || is_prime(last)==0){
        printf("You did not enter prime numbers");
        exit(EXIT_FAILURE);
    }

    else{
        int next=first;


        for(next;next<=last;next= next +1){
            if(is_prime(next)!=1) {
                sum += next;
                printf("%d \n",sum);

            }

        }


    }
    return(0);

}

*/
/*
int main(int argc, char *argv[]) {

    int no_primes=0,first,last,nextno;


    printf("Please enter first number\n");
    scanf("%d", &first);
    printf("Please enter second number\n");
    scanf("%d", &last);

    for(nextno=first;nextno<=last;nextno +=1){
        if(is_prime(nextno)!=0){
            no_primes+= 1;
            printf("Count of prime numbers %d - Prime number is %d\n", no_primes,nextno);
        }
    }
    double difference = last - first + 1, prime_density;

    prime_density = (no_primes*1.0)/difference;
    printf("The density of your primes is %.3lf",prime_density);
    return(0);


}
*/

//  Test 3  Question 2
/*
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

    int n, no_xs = 0, i,whitespace=0;

    printf("Please enter a number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("the value %d entered is less than or equal to 0, program aborted",
               n);
        exit(EXIT_FAILURE);
    } else {
        for(i=1; i<=n; i = i +1){

            for(whitespace= n- i; whitespace>=0; whitespace = whitespace -1){
                printf(" ");
            }
            for(no_xs=i; no_xs>0; no_xs = no_xs - 1){
                printf("x");

            }
            printf("\n");
        }
    }
    return(0);
}

 */

