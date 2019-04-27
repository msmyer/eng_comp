/* Solution to comp20005 Assignment 1, 2019 semester 1.

   Authorship Declaration:

   (1) I certify that the program contained in this submission is completely
   my own individual work, except where explicitly noted by comments that
   provide details otherwise.  I understand that work that has been developed
   by another student, or by me in collaboration with other students,
   or by non-students as a result of request, solicitation, or payment,
   may not be submitted for assessment in this subject.  I understand that
   submitting for assessment work developed by or in collaboration with
   other students or non-students constitutes Academic Misconduct, and
   may be penalized by mark deductions, or by other penalties determined
   via the University of Melbourne Academic Honesty Policy, as described
   at https://academicintegrity.unimelb.edu.au.

   (2) I also certify that I have not provided a copy of this work in either
   softcopy or hardcopy or any other form to any other student, and nor will
   I do so until after the marks are released. I understand that providing
   my work to other students, regardless of my intention or any undertakings
   made to me by that other student, is also Academic Misconduct.

   (3) I further understand that providing a copy of the assignment
   specification to any form of code authoring or assignment tutoring
   service, or drawing the attention of others to such services and code
   that may have been made available via such a service, may be regarded
   as Student General Misconduct (interfering with the teaching activities
   of the University and/or inciting others to commit Academic Misconduct).
   I understand that an allegation of Student General Misconduct may arise
   regardless of whether or not I personally make use of such solutions
   or sought benefit from such actions.

   Signed by: [Max Sidney Myer 982]
   Dated:     [19-04-24]

*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 999
#define STARTCHARGE 100.0
#define DRONEWEIGHT 3.8
#define MAXDISTANCE 6300.0
#define FLIGHTSPEED 4.2


struct delivery{
    double xcoord;
    double ycoord;
    double mass;
};

struct batteryuse{
    double batteryout;
    double batteryin;
};


double distance_calc(struct delivery point1, struct delivery point2)
    {
    return(sqrt((point2.xcoord-point1.xcoord)*(point2.xcoord-point1.xcoord)+
    ((point2.ycoord-point1.ycoord)*(point2.ycoord-point1.ycoord))));
    }

 struct batteryuse battery_usage(struct delivery point1, struct delivery point2)
         {
    struct batteryuse battery;
    double distance = distance_calc(point1,point2);
    battery.batteryout =(distance/(MAXDISTANCE/(DRONEWEIGHT+point2.mass)))*100;
    battery.batteryin =(distance/(MAXDISTANCE/(DRONEWEIGHT)))*100;
    return (battery);

}

int main(int argc, char *argv[])
{

    char ch;
    struct delivery deliveries[MAX];
    int iterator = 0,i =0, amountofbatteriers =1;
    double mass_tmp = 0, total_mass = 0,charge=STARTCHARGE,totalflight=0;
    struct delivery origin;

    origin.xcoord = 0;
    origin.ycoord = 0;
    origin.mass =0;



    while (scanf("%c", &ch) != EOF)
    {


        if (ch == '\n')
        {
           break;
        }
    }

    while (scanf("%lf%lf%lf", &deliveries[iterator].xcoord,&deliveries[iterator].ycoord, &deliveries[iterator].mass)!=EOF)
    {
        iterator++;
    }



    //Section 1

    //prints total datalines read in
    printf("S1, total data lines: %d \n", iterator);


    for(i=0;i< iterator; i++) {


        mass_tmp = deliveries[i].mass;
        total_mass += mass_tmp;

        // prints the first data line's  values
        if (i == 0) {
            printf("S1, first data line :  x=%6.1lf, y=%6.1lf, kg=%2.2lf \n",
                   deliveries[i].xcoord, deliveries[i].ycoord,
                   deliveries[i].mass);
        }

        //prints the last data line's values and the total combined mass
        if (i == iterator - 1) {
            printf("S1, final data line :  x=%6.1lf, y=%6.1lf, kg=%2.2lf \n",
                   deliveries[i].xcoord, deliveries[i].ycoord,
                   deliveries[i].mass);
            printf("S1, total to deliver: %.2lf kg\n\n", total_mass);

        }

    }

    //Section 2

    for(i =0; i< iterator; i++)
    {

        struct batteryuse battery = battery_usage(origin,deliveries[i]);
        if(charge<(battery.batteryout+battery.batteryin))
        {
            printf("S2, change the battery\n");
            charge = 100;
            amountofbatteriers += 1;
        }

        printf("S2, package= %2d, distance= %5.1lfm, battery out=%4.1lf%%, battery ret=%4.1lf%%\n",i, distance_calc(origin, deliveries[i]),
              battery.batteryout,battery.batteryin);
        charge-=(battery.batteryout+battery.batteryin);


        totalflight += 2.0*distance_calc(origin,deliveries[i]);

    }
    printf("S2, total batteries required:%4.d\n",amountofbatteriers);
    printf("S2, total flight distance=%.1lf meters, total flight time=%4.0lf seconds\n",totalflight,totalflight/FLIGHTSPEED);
    return 0;
}