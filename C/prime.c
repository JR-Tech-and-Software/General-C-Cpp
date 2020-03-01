#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int prime, placeholder;
    long counter;
    char request[4];
    placeholder = 1;
    printf("Type in a number to be less than the prime: ");
    fgets(request, 4, stdin);
    prime = atoi(request);
    prime += 1;
    counter = 1;
    while(placeholder == 1){
        if (prime == 1) {
            prime = 3;
            break;
        }
        if (prime == 2) {
            prime = 3;
            break;
        }
        if(prime <= 0){
            printf("Cannot do negitive numbers.\n");
            exit(0);
        }
        counter += 1;
        if (counter == prime) {
            break;
        }
        else{
            if ((prime % counter) == 0){
                prime++;
                counter = 1;
            }
        }
    }
    printf("%d\n", prime);
    return 0;
}
