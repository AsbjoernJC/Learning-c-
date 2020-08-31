#include <iostream>

using namespace std;

int main()
{
    int num1, num2, result;
    char op;

    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter operator: " << endl;
    cin >> op;
    cout << "Enter second number: " << endl;
    cin >> num2;
    if(op == '+'){
        result = num1 + num2;
    } else if(op =='-'){
        result = num1 - num2;
    } else if(op =='*'){
        result = num1 * num2;
    } else if(op =='/'){
        result = num1 / num2;
    } else {
        cout << "Invalid Operator";
    }

    cout << result;
//    result = num1 << op << num2;
//    cout << num1 << op << num2 << endl;   // in c++ this won't work as it won't calculate it.. Probably because op is a character
    return 0;
}
