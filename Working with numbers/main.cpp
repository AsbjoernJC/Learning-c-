#include <iostream>
#include <cmath>        //importing modules via. #include <module>

using namespace std;

int main()
{
//    int wnum = 5;
//    double dnum = 5.5;
//
//    wnum++;     //augmented assignment statement wnum++ = wnum + 1
//    wnum--;
//    wnum+= 80;  //augmented assignment statement wnum+=80 =wnum + 80
//    cout << 5.5 + 9 << endl;    // when float/doubles and integers interact they will always return a decimal number
//    cout << 10 / 3 <<"\n";     //returns integer 3 as both numbers are integers
//    cout << 10.0 / 3.0;        //returns 3.33333

    cout << pow(2, 5)<<endl;          //2 to the power of 5
    cout << sqrt(36)<<endl;            //squareroot
    cout << round(4.6)<<endl;               // rounds the number
    cout << fmax(3, 10)<<endl;          //returns the number that is the largest
    cout << fmin(3, 10)<<endl;          //returns the smallest number
    return 0;
}
