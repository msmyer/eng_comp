//
// Created by max on 16/03/19.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Define all change variables */
#define N_COINS 6
#define SENT -1         // sentinel value
#define TWO_DOLLAR 2.00
#define DOLLAR 1.00
#define FIFTY_CENT .50
#define TWENTY_CENT .20
#define TEN_CENT 0.10
#define FIVE_CENT .05


int main(int argc, char *argv[])
{
    double paid=0.0;
    double price=1.00;
    int change[N_COINS];
    double remainder = SENT;
    double coins[N_COINS];
    double totalchange = 0;

    // initialize values of coins
    coins[0] = TWO_DOLLAR;
    coins[1] = DOLLAR;
    coins[2] = FIFTY_CENT;
    coins[3] = TWENTY_CENT;
    coins[4] = TEN_CENT;
    coins[5] = FIVE_CENT;

    // initialize change array
    for (int i=0; i<N_COINS; i++) {
        change[i] = 0;
    }


    // runs calculator

    printf("Please enter amount paid: $");
    scanf("%lf", &paid);

    // checks if you have enough money

        if (paid < price) {
        printf("Insufficient funds");
        exit(EXIT_FAILURE);

        }

        else {

            totalchange = paid - price;


            /* determines change to be given,
               remainder is the value calculated by the division
               change[i] is value calculated by division with decimals removed
               total change is then updated */

             for (int i=0; i<N_COINS; i++) {

                 remainder = fmod(totalchange, coins[i]);
                 change[i] = (int)trunc(totalchange / coins[i]);
                 totalchange -= change[i] * coins[i];

                 // rounding feature
                 if (i == N_COINS - 1) {
                     if(totalchange > .025){
                         change[i]++;
                     }
                 }

                 // prints change given
                 if(change[i]!=0) {
                     printf("Change:$ %d x $%.2f \n", change[i], coins[i]);

                 }
                 if (remainder==0) {
                     break;

                 }




            }

            //prints total change received
           printf("Total Change:$ %.2f", (coins[0]*change[0] + coins[1]*change[1]
           + coins [2]*change[2] + coins [3]*change[3] + coins [4]*change[4] +
           coins [5]*change[5]));



    }
    return 0;

}
