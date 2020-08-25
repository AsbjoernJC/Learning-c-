#include <iostream>

using namespace std;

void sayHi(string name, int age);        //function stub. Will work even though it doesn't contain the block of the function. A function stub must be a reference to the function?

int main()      // functions in cpp have the syntax  functionname(params){content}
{
    string name = "Asbjoern";
    sayHi(name, 20);        //calling a function is done just like in python
    sayHi("Steve", 19);
    return 0;
}

void sayHi(string name, int age)        //void is a function that is not going to return anything.      void functionname(param) {content}.    The argument must also declare the datatype it is passed
{
    cout << "Hello " << name << ", you are " << age << " years old." <<endl;
}
