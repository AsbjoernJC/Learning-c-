#include <iostream>

using namespace std;

int main()
{
    string nums [] = {"Hej", "med", "dig.", "Jeg", "hedder"};
    for(int i = 1; i<=5; i++){              // for(){}      for loop syntax in c++. Inside the for loop parenthesis is a variable instantiation. for(int i = 1; looping condition;
//        increment index variable){} This for loop is essentially for i in range(1, 5) in python
        cout << i << endl;
    }
    for(int i = 0; i<5; i++){
        cout << nums[i] << endl;
    }
    return 0;
}
