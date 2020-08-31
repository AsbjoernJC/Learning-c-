#include <iostream>

using namespace std;

int main()
{

    int numberGrid[3][2] = {  //in the first closed square bracket it should be passed the elements inside of main array. in the second it should be declared the amount of elements inside of the
        //nested arrays { {1, 2}<--nested array has two elements } <-- main array has 1 element
                            {1, 2},
                            {3, 4},
                            {5, 6}
                         };         // creating a nested array is done by [][] not [[]], which python could lead you to think. The nested element will be inside their own curly brackets,
//    which makes sense given c++ syntax

//    cout << numberGrid[0][1] << endl;


    for(int i=0; i < 3; i++){
        for(int ni = 0; ni<2; ni++){
            cout << numberGrid[i][ni] << "\t";
        }
        cout << endl;
    }

    return 0;
}
