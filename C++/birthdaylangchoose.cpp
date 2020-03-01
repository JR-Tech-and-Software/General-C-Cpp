/*
This file is under the MIT License.

Copyright 2020 Jeremiah Haven

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and 
associated documentation files (the "Software"), to deal in the Software without restriction, including 
without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to 
the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial 
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT 
LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

--------------------------------------------------------------------------------------

This was just a fun thing for me to do. On Facebook for my family member's birthdays I put a snippet
of code in a cetain language that does nothing but spit out "Happy Birthday, Mom!", or something like
that.
*/

// Libraries
#include <cstdlib>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

// A function for the rand() function that will make our code a lot cleaner.
// All we need is the minimum number and the maximum number, all as an integer.
int randNums(int minNum, int maxNum){
    
    // Simply return the random number out of the rand() function
    return rand() % maxNum + minNum;
}

// Main function where we will be executing code.
int main(){
    
    // The various languages (or markup languages) that I know
    std::string langs[5] = {"C", "C++", "Python", "HTML", "JavaScript"};
    
    // Should I put the message into a variable and print out the variable or just
    // use the print function?
    std::string ways[2] = {"using variables", "using the language's print command"};
    
    // Random number magic
    srand( (unsigned)time(NULL) );
    
    // Put the chosen language and method into variables so that we can process them later
    std::string theLang = langs[randNums(1, 5) - 1];
    std::string theWay = ways[randNums(1, 2) - 1];
    
    // A markup language it cannot handle variables. Thus, if our chosen language is HTML,
    // overwrite our chosen method by just using <p> tags instead of trying to do the impossible.
    if(theLang == langs[3]){
        theWay = ways[1];
    }
    
    // Finally, print the completed message out to the screen
    std::cout << "You should use the language " << theLang << " " << theWay << ".\n";
    
    // Our little application has finished successfully.
    return 0;
}
