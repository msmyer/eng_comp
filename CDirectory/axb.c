#include <stdio.h> 


int 
main (int argc, char *argv[]){ 

double a=0.0;
double b=0.0;
double x=-b/a;

printf("Please input value of a & b to solve for x"); 
printf("\nPlease input a:  ");
scanf("%lf", &a);

/* if statement blocks input of zero which is an impossible calculation */ 
while (a == 0)
{
printf( "input variable can't take the value of zero, please enter new value");
scanf("%lf", &a);
}

/* else being the catch all for any input value of a <=0 and continues function */
	printf("\nPlease input b:  "); 
	scanf("%lf", &b);

printf("Solution: %lf", x);

return 0;

}