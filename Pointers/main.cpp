#include <iostream>

using namespace std;

int main()
{
                    //pointers are basically memory addresses
    int age = 19;
    int *pAge = &age;           //Syntax: datatype *pVariablename = &variablename; a pointer variable that stores the memory address, where the value of age (19) is stored.
    // they share the datatype of the variable whose address they're storing.
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *Name = &name;
    //variables are containers storing information. Every single computer has memory via. ram.
    //whenever a computer is running a program it is using ram, memory to store and keep track of information. It will track the variables store their values in the physical memory
    //Can probably understood through binary how they are stored to visualize the different values
    //each variable stored in a physical "container" has an address, memory address. The program accesses the variables via. the physical memory address.


//    cout << &age << endl;               //the physical address can be accessed in a program by using an 'Ampersand': &. This returns: 0x61fe00 A hexadecimal number, a pointer.
//    cout << &gpa << endl;
//    cout << &name << endl;

    cout << pGpa << endl;
    cout << *pGpa << endl;              //d-referencing a pointer. Basically means accessing the value inside the memory address. Done by writing *pVariablename
    cout << *&gpa << endl;              //also a way of d(e)?-referencing a pointer. As &variablename will return a pointer
    cout << &*&gpa << endl;             //also returns a pointer

    //working with pointers can be really useful in C++ and C. C++ is based on C

    //a memory address is in c++ called a pointer

    return 0;
}
