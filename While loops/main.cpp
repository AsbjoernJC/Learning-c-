#include <iostream>

using namespace std;

int main()
{
    int index = 1;
//    while(index <= 5){        //in the parenthesis you put the condition.
//        cout << index << endl;
//        index ++;             // also called incrementing index.
//    }
    do{                         // do{}while() loop. Will execute do's block of code and then check the condition
        cout << index << endl;
        index++;
    }while(index <= 5);

    return 0;
}
