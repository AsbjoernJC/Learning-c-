#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;      //not randomly generated, sad!
    int guess;
    int guessCount = 0;
    int guessLimit = 3;


    while(guess != secretNum && guessCount != guessLimit){
        if(guessCount < guessLimit){
            cout << "Enter a guess: ";
            cin >> guess;
            guessCount++;
        } else {
            guessCount = 3;
        }
    }
    if(guess != secretNum){
        cout << "You didn't guess the number, the number was: " << secretNum;
    } else {
        cout << "You win!";
    }
    return 0;
}
