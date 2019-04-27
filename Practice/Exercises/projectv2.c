#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Delivery struct
struct delivery{
    double xcoord;
    double ycoord;
    double mass;
};





int main(int argc, char *argv[])
{
    int MAX = 999;
    int ch, titleline=0, newlinelast=1;
    struct delivery deliveries[MAX];
    int iterator = 0;
    double mass_tmp = 0, total_mass = 0;

    while ((ch=getchar()) != EOF)
    {

        if (ch == 'x' && newlinelast)
        {
            titleline = 1;
        }
        if (!titleline)
        {

            scanf("%lf%lf%lf", &deliveries[iterator].xcoord, &deliveries[iterator].ycoord, &deliveries[iterator].mass);
            iterator++;
        }
        if (ch == '\n') {
            titleline = 0;
            newlinelast = 1;

        } else {
            newlinelast = 0;
        }
    }


    // prints the total data lines read in via the counting iterator.
    printf("S1, total data lines: %d \n", iterator-1);


    for(int i=0; i< iterator; i++)
    {


        mass_tmp = deliveries[i].mass;
        total_mass += mass_tmp;

        // prints the first data line's  values
        if(i==0)
        {
            printf("S1, first data line : x = %7.2lf, y =%7.2lf, kg =%7.2lf \n",
                   deliveries[i].xcoord, deliveries[i].ycoord,
                   deliveries[i].mass);
        }

        //prints the last data line's values and the total combined mass
        if(i==iterator-2)
        {
            printf("S1, final data line : x = %7.2lf, y =%7.2lf, kg =%7.2lf \n",
                   deliveries[i].xcoord, deliveries[i].ycoord,
                   deliveries[i].mass);
            printf("S1, total to deliver: %2.lf kg\n", total_mass);

        }


    }

    //distance function
    double distance(double (deliveries[iterator].xcoord), double delevieries[iterator].ycoord)
    {

    }

    return 0;
}