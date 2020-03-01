/*
This file is under the MIT License.

Copyright 2020 Jeremiah Haven

Permission is hereby granted, free of charge, to any person obtaining a copy of this software 
and associated documentation files (the "Software"), to deal in the Software without restriction, 
including without limitation the rights to use, copy, modify, merge, publish, distribute, 
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is 
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or 
substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR 
PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR 
ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

---------------------------------------------------------------

This program simply tells you the highest number a(n) x-bit processor can calculate
*/

// Libraries
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Where our code will be executed
int main(int argc, char const *argv[])
{
    
    // Initializing all of the variables we need
    int bits, counter, intHolder, fill, flag;
    long solution;
    char amtBits[2];
    int solutionList[1024];
    
    // Ask the user for the bits, or fill in x in an x-bit processor
    printf("How many bits? # ");
    fgets(amtBits,3,stdin);
    
    // Make sure they enter a real number.
    try{
        bits = atoi(amtBits);
    }
    catch{
        printf("Enter a real number next time.\n");
    }
    
    // Do something special if they inter a number greater than 32.
    if (bits >= 32){
        bits = 31;
        flag = 1;
    }
    else{
        flag = 0;
    }
    
    // Reset the counter and make our solution 1 by default
    counter = 0;
    solution = 1;
    
    while(1){
        // Start populating this array with our current solution.
        solutionList[counter] = solution;
        
        // The array now has 1 more thing in it than it has before, so
        // make sure we increment this variable.
        fill++;
        
        // Commented code is for debugging purposes only
        //printf("%d\n", solutionList[counter]);
        
        // We have completed the loop
        counter++;
        
        // Transfer the current solution to a placeholder
        intHolder = solution;
        
        // If we have done this for the amount of bits the user entered in,
        // break out of the loop.
        if(counter == bits){
            break;
        }
        
        // Calculate the next solution
        solution = intHolder * 2;
    }
    //printf("%d\n", fill);
    
    // Now that we have a list of solutions, reset the solution variable
    // for more calculations
    solution = 1;
    
    // Create integer i
    int i = 0;
    
    // Start adding up the solutions
    while(i <= fill){
        i++;
        solution += solutionList[i];
    }
    
    // If we set this flag, output this.
    if(flag == 1){
        printf("Max of 31 bits is %ld\n", solution);
        return 0;
    }
    // Otherwise, output this
    printf("It is %ld.\n", solution);
    return 0;
}
