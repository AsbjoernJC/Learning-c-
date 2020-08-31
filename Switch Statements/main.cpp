#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum){
    string dayName;
//    if(dayNum == 0) {
//        dayName == "Sunday";
//    } else if(dayNum ==1){
//        dayNum == "Monday";
//    } else if (dayNum ==...+)     //This would be inefficient and this is exactly a situation where switch statements are preferred. The condition is checking if a variable is equal to something else
    switch(dayNum){                 //Passing the argument that we want to compare
    case 0:                         //In the case dayNum is equal to 0, then ...
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:                    //if none of the cases are true the code inside default's block of code will be executed
        dayName = "Invalid day number, try 0-6";
    }
    return dayName;
}

int main()
{


    //switch statement special type of if statement for checking one particular value against a bunch of values
    cout << getDayOfWeek(3);
    return 0;
}
