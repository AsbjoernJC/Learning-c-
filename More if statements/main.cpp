#include <iostream>

using namespace std;
// Using comparisons inside if statements

int getMax(int num1, int num2, int num3){
    int result;

    if (num1 >= num2 and num1 >= num3){          // Is there a difference between using 'and' and '&&'?
        result = num1;
    } else if(num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

int main()
{
    cout << getMax(14, 13, 19);
    return 0;
}
