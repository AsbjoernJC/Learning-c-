#include <iostream>

using namespace std;

int main()
{
//    int age;
    string name;
//    cout << "Enter your age: ";
//    cin >> age;         // when input must be given greater than operator must be used >> this syntax is used for getting characters and numbers
    cout << "Enter your name: ";
    getline(cin, name);            // getline will get an entire line of text. Creates a new line automatically. Not utf-8 encoded
//    cout << "You are " <<age<< " years closer to death";
    cout << "Hello " <<name;
    return 0;
}
