#include <iostream>

using namespace std;

class Student {
public:
    string name;
    string major;
    double gpa;
    Student(string aName, string aMajor, double aGpa){
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    bool honorRoll(){   //object function/instance functions. A function inside a class. Used to get information about objects or modifying values
        if(gpa >= 3.5){
            return true;
        }
        return false;
    }

};

int main()
{

    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.honorRoll() << endl;       //when printing out booleans 0 represents false and 1 represents true
    cout << student2.honorRoll() << endl;
    return 0;
}
