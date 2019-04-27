#include <stdio.h>

#define MAX_YEARS 7   /* number of years to compute for */

#define MIN_RATE 2    /* minimum annual percentage rate */
#define MAX_RATE 7    /* maximum interest rate */

int
main(int argc, char *argv[]) {
    int month,
            rate,
            year;
    double balance,
            monthly_rate;
    double MONTHLY;

    printf("enter monthly saving rate");
    scanf("%lf", &MONTHLY);
    /* print the table heading lines */
    printf("Monthly savings of $%d", MONTHLY);
    printf(", with monthly compounded interest\n");
    printf("Annual Rate   |");
    for (rate=MIN_RATE; rate<=MAX_RATE; rate++) {
        printf("%4d%%  ", rate);
    }
    printf("\n");

    /* and now the rows of the table, one by one */
    for (year=1; year<=MAX_YEARS; year++) {
        printf("After %1d years | ", year);
        for (rate=MIN_RATE; rate<=MAX_RATE; rate++) {
            /* compute one value */
            balance = 0.0;
            monthly_rate = 1.00 + ((rate/100.00)/12);
            for (month=1; month<=12*year; month++) {
                balance *= monthly_rate;
                balance += MONTHLY;
            }
            printf("%5.0f  ", balance);
        }
        /* end of one row */
        printf("\n");
    }
    return 0;
}
