#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define true 1
#define false 0


int main(int argc, char *argv[])
{
   double a = strtod(argv[1], NULL);
   double b = strtod(argv[2], NULL);

   int nearly_equal = (((fabs(a-b))< (double) 0.000001))?
    true:false;

   int positive_input=((a>=0)||(b>=0));

    if (nearly_equal) {
        printf("nearly equal");
    } else {
        if (positive_input) {
            printf("%.6f\n", a * b);
        } else {
            printf("%.6f\n", a + b);
        }
    }

    return(0);
}