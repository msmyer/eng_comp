#include <stdio.h> 


int 
main (int argc, char *argv[]) 
{
	double Conversion;
	int next;
	double Celsius_To_Farenheit;
	
	next = 0;
	Conversion = 0;
	Celsius_To_Farenheit = ((&next*(9/5))+32);
	
	printf("Enter Temperature in Degrees Celsius\n");
	while (scanf("%d", &next)){
			Conversion = Celsius_To_Farenheit*next;
	}
	
	printf("The Degrees Celsius you entered converted to Farenheit is %f\n", Conversion);
	return 0;
}	
