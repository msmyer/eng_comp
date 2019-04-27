#include <stdio.h>

int
main(int argc, char *argv[])    {
    int cents;
    int divisor;
    int i;
    printf("Enter cents as an integer: ");
    scanf("%d", &cents);
    printf("Cents entered = %d \n", cents);

    int change[5] = {50, 20, 10, 5, 1};
    int togive[5] = {0, 0, 0, 0, 0};

    for(i = 0; i < 5; i++)    {
        divisor = change[i];

        while(cents >= divisor){
            cents -= divisor;
            togive[i] ++;
        }
        if(togive[i] > 0)   {
            printf("Change = %d x %dc \n", togive[i], change[i]);
        }
    }




    return 0;
}
