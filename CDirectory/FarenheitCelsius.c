#include<stdio.h>
 
int main()
{
    float celsius,fahrenheit;
    int Opt1 = 1; 
    int Opt2 = 2;
    int input= 0;
    
    printf("Would you like to convert from Opt 1. Fahrenheit to Celsius or \nOpt 2. Celsius to Fahrenheit\n");
    printf("\nInsert option no.");
    scanf("%d",&input); 
    printf("\nEnter temperature in Fahrenheit:");
    scanf("%f",&fahrenheit);
   
 
    celsius=(fahrenheit - 32)*5/9;
    printf("Your temperature has been converted into Celsius\nCelsius = %1f",celsius); 
    return 0;
}