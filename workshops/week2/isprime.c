#include <stdio.h>
#include <stdlib.h>

int is_prime(int val) {

    int prime = 1;

    for (int i = 2; i * i <= val; ++i) {
        if (val % i == 0) {
            prime = 0;
            break;
        }
    }

    if (!prime) {
        return 0;
    } else {
        return 1;
    }
}


int main (int argc, char *argv[]){

    int n, prime = 0;

    printf("Enter a positive integer:  ");
    scanf("%d", &n);

    while(!prime) {
        prime = is_prime(n);
        if (!prime) {
            n++;
        }
    }
    printf("%d", n);
    return 0;

}

