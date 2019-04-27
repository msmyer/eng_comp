#include <stdio.h>

int
main(int argc, char *argv[])    {

    double option;
    double Far;
    double Cel;

    printf("To convert to fahrenheit: 1, to celcius: 2 \n");
    scanf("%lf", &option);

    if(option == 0) {
        printf("Enter farenheit temperature: ");
        scanf("%lf", &Far);

        double Cel = (Far - 32. ) * 5./9.;
        printf("Temperature in celcius = %lf \n", Cel );
    }
    else {
        printf("Enter celcius temperature: ");
        scanf("%lf", &Cel);

        double Far = Cel * 9./5. + 32.;
        printf("Temperature in celcius = %lf \n", Far );
    }

    return 0;
}