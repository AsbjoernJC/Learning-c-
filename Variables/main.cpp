#include <iostream>

using namespace std;

int main()
{
    //When defining a variable the data type must be declared
    //Always remember;

    string characterName = "John";
    int characterAge;
    characterAge = 35;
    cout << "There once was a man named " << characterName << endl;
    cout << "He was "<<characterAge<<" years old" <<endl;

    characterName = "Mike";
    cout << "He liked the name "<<characterName<< endl;
    cout << "But did not like being "<<characterAge<< endl;
    return 0;
}
