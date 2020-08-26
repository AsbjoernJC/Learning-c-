#include <iostream>

using namespace std;


int main()
{

    bool isMale = true;
    bool isFemale = false;
    bool isTall = true;
    bool isThiccc = false;
    bool imFalse = false;
    string story = "There was once a man called Applejack";

    if(isMale == true) {          // syntax if(condition){block}.   An if statements block of code is executed if the boolean value is true
        cout << "You are a male" << endl;
    }

//    if(isFemale) {            //won't be executed
//        cout << "You are a female";
//    }

    if(isFemale == false) {          // syntax if(condition){block}.   An if statements block of code is executed if the boolean value is true
        cout << "You are a female" << endl;     //Comparison operators also work inside of c++ as long as the condition = true
    }

    if(isFemale) {
        cout << "You are a female" << endl;
    } else{
        cout << "You are not a female"<<"\n";
    }

    if(isMale && isTall) {          //and is written as && believe | is or. Giraffe academy writes || instead of just one |. Don't know if there's a difference
        cout << "You are a tall man" <<"\n";
    }

    if(isMale | isThiccc){
        cout << "You are either man or thiccc" <<"\n";
    }

    if(isMale && isThiccc){
        cout << "You are a thiccc man" <<"\n";
    } else if(isMale && !isTall){               //can't just say isMale ! isThiccc has to have the and operator too != (does it do anything in c++ if statements
                                                                                                                // will return true if one of the conditions = true
            cout << "Just trying this out";
        } else if(!isMale == isTall){
            cout << "You are tall and not a male";
        } else {
            cout << "You are neither tall nor male";
        }                                                //elif is just written as else if
//
//    if ("Applejack" in story){           //not sure what c++' version of the keyword "in" is
//        cout << "in also works";
//    }

    return 0;
}

//If else sytax: if(condition) {block} else{}
