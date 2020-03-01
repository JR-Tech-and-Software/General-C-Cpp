#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int bits, counter, intHolder, fill, flag;
    long solution;
    char amtBits[2];
    int solutionList[1024];
    printf("How many bits? # ");
    fgets(amtBits,3,stdin);
    try{
        bits = atoi(amtBits);
    }
    catch{
        printf("Enter a real number next time.\n");
    }
    if (bits >= 32){
        bits = 31;
        flag = 1;
    }
    else{
        flag = 0;
    }
    counter = 0;
    solution = 1;
    while(1){
        solutionList[counter] = solution;
        fill++;
        //printf("%d\n", solutionList[counter]);
        counter++;
        intHolder = solution;
        if(counter == bits){
            break;
        }
        solution = intHolder * 2;
    }
    //printf("%d\n", fill);
    solution = 1;
    int i = 0;
    while(i <= fill){
        i++;
        solution += solutionList[i];
    }
    if(flag == 1){
        printf("Max of 31 bits is %ld\n", solution);
        return 0;
    }
    printf("It is %ld.\n", solution);
    return 0;
}
