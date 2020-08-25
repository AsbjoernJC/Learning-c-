#include <iostream>

using namespace std;

                //When defining a function in c++ the return type must be declared. A return type tells what data type the function will return
                //void means that the function isn't going to return any information.

//double cube(double num) {
//    double result = num * num * num;
//    cout << result;
//}

double cube(double num) {
    return num * num * num;
}

int main()
{
    cout << cube(3.2);

    return 0;
}
