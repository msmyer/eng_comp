//
// Created by max on 4/04/19.
//
#include<stdlib.h>
#include<stdio.h>
#define MAX_CLASS_SIZE 50

//example 3.3
/*

int main(int argc, char *argv[]){

    int class_size;
    printf("Please enter class size");
    scanf("%d", &class_size);

    if (class_size == MAX_CLASS_SIZE){
        printf("class is now full brah");
    }

    return (0);

}
 */
//grapher
/*

int main (int argc, char *argv[]){

    int nstars,i;

    printf("please enter numbers\n");


    while(scanf("%d", &nstars)){
        printf("%d  |", nstars);
        for(i=0;i<=nstars;i++){
            printf("*");
        }
        printf("\n");


    }
    return(0);
}
*/


//5.5 number is perfect
/*
int isperfect(int n){
    int i,sum, divisor;
    for(i=1; i<=n; i++){
        if(n%i==0){
            sum = 0 + i;
        }



    }
    if(sum - n == 0) {
        return (1);
    }
    else{
        return(0);
    }
}

int main(int argc, char *argv[]){
    int n;
    printf("Please enter a number\n");
    scanf("%d",&n);
    if(isperfect(n)!=0){
        printf("%d, Tis a perfect number", n);
    }
    else {
        printf("%d, tis not a perfect = ( ",n);
    }
    return (0);
}
 */

//Hand written boi

int main (int argc, char *argv[]){
    int previous, next;
    printf("Please enter numbers\n");
    scanf("%d", &next);
    previous = next;

    while(1){
        scanf("%d", &next);
        if(next<previous){
            printf(" *** value %d is smaller than %d\n", next, previous);

        }
        previous = next;
        }
    return (0);
    }

