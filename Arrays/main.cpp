#include <iostream>

using namespace std;

int main()
{
    int luckyNums[] = {1, 4, 3, 15, 13, 42};        //arrays are created by declaring the datatype variablename[] with closed brackets then = {elements in the list}
//    int luckyNums[20] = {1, 2};      // by passing the closedbrackets after the variable name a integer. It will tell c++ how many elements it should be able to hold
    luckyNums[0] = 19;          //mutable just like in python probably the same in every other language
    cout << luckyNums[0];       //indexing is done just like in python

    return 0;
}
