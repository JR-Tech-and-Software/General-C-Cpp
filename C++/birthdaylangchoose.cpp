#include <cstdlib>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

int randNums(int minNum, int maxNum){
    return rand() % maxNum + minNum;
}
int main(){
    std::string langs[5] = {"C", "C++", "Python", "HTML", "JavaScript"};
    std::string ways[2] = {"using variables", "using the language's print command"};
    srand( (unsigned)time(NULL) );
    std::string theLang = langs[randNums(1, 5) - 1];
    std::string theWay = ways[randNums(1, 2) - 1];
    if(theLang == langs[3]){
        theWay = ways[1];
    }
    std::cout << "You should use the language " << theLang << " " << theWay << ".\n";
    return 0;
}