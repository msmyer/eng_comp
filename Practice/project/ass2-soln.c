#include <stdio.h>



typedef struct {
    int location;
    int year;
    int month;
    double rainfall;
    char verified;
}day_t;

int read_data(day_t day[]) {
    int linesread = 0;
    while (getchar() != '\n');

    while (scanf("IDCJAC0001,%d,%d,%d,%lf,%c ",
                 &day[linesread].location, &day[linesread].year, &day[linesread].month,
                 &day[linesread].rainfall, &day[linesread].verified)
           != EOF){

         linesread++;
    }
    printf("hi");
    return (linesread);

}
char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                  "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

int main() {
    int linesread=0,i;
    day_t day[99999];

    linesread=read_data(day);
    printf(" %d\n",linesread);
    printf("%d, %d",1,day[0].year,)
    for(i=0;i<12;i++) {
        printf(" %s",months[i]);
    }
    return 0;
}


