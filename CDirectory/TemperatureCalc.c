#include<stdio.h>
#define INVALID -1 
int main()
{
/* Initiate variables to be referred to later in the program */

    float celsius,fahrenheit;
    int input= 0;
    
    printf("Would you like to convert from Opt 1. Fahrenheit to Celsius or \nOpt 2. Celsius to Fahrenheit\n");
    printf("\nInsert option no.");
    //scanf("%d",&input); 
    
    
/* Basic Loop to make sure the user enters a viable option no. either 1 or 2, 
        will continue to repeat until correct option has been chosen          */ 
/*
    while((input!=1)&&(input!=2)){
    	printf("Please enter a valid option no.\n");
    	printf("input: %d",input);
    	scanf("%\n",&input);
    	
    }
*/
while (1) {
	if (input == 1 || input == 2) {
		break;
	}
	else {
		scanf("%d",&input);
	}
}
/* Option 1. chosen therefore run Fahrenheit to Celsius conversion */ 

    if(input == 1) {
    	printf("\nEnter temperature in Fahrenheit:");
    scanf("%f",&fahrenheit);
    
    celsius=(fahrenheit - 32)*5/9;  /* <----- This is the conversion formula for Celsuis to Fahrenheit */
    
    printf("\nYour temperature has been converted into Celsius\nCelsius = %.2f",celsius); 
    
    } 
    
/* Option 2. chosen therefore run Celsius to Fahrenheit conversion */ 

    else if(input == 2) { 
    	printf("\nEnter temperature in Celsius:");
    scanf("%f",&celsius);
   
    fahrenheit=((9.0/5)*celsius + 32);    /* <----- This is the conversion formula for fahrenheit to Celsuis */
   
    printf("\nYour temperature has been converted into Fahrenheit\nFahrenheit = %.2f",fahrenheit);
    
    
    }
     	
    return 0;
}