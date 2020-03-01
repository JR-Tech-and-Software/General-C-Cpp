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

-----------------------------------------------------------------

This script generates a prime number
*/

// Libraries
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Main function where we execute our code
int main(int argc, char const *argv[])
{
    // Initialize our variables
    int prime, placeholder;
    long counter;
    char request[4];
    placeholder = 1;
    
    // Get input from the user
    printf("Type in a number to be less than the prime: ");
    fgets(request, 4, stdin);
    
    // Convert the input into an integer
    prime = atoi(request);
    
    // Increment the prime, initialize the counter
    prime += 1;
    counter = 1;
    
    // Loop to calculate the prime
    while(placeholder == 1){
        
        // If it is 1 or 2, set it to 3, then break out of the loop.
        // We do not need extensive calculations for these numbers.
        if (prime == 1) {
            prime = 3;
            break;
        }
        if (prime == 2) {
            prime = 3;
            break;
        }
        
        // No negetives numbers, please!!!
        if(prime <= 0){
            printf("Cannot do negitive numbers.\n");
            exit(0);
        }
        
        // Increment the counter
        counter += 1;
        
        // If our counter is the same as our result, get out of the loop.
        if (counter == prime) {
            break;
        }
        else{
            // If not, do the calculation.
            
            // If the remainder of the calculation prime/counter is 0, then increase the prime and reset the counter.
            if ((prime % counter) == 0){
                prime++;
                counter = 1;
            }
        }
    }
    
    // Print out the result
    printf("%d\n", prime);
    
    // The application has completed successfully.
    return 0;
}
