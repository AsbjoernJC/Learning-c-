#include <iostream>

using namespace std;

int main()
{
    string phrase = "Bone's Academy";
    phrase[0] = 'D';
    string subphrase = phrase.substr(7, 7);

    cout << phrase << "\n";
    cout << phrase.length() << "\n";
    cout << "The first letter of phrase is: "<< phrase[0] << "\n";    // methods in c++ are also initiated by . Indexing works like in python, count starts at 0
    cout << "Hello world!" << endl; //endl == new line character
    cout << phrase.find("Academy", 0) <<endl;      //find(character/string, searching from index y and upwards) returns the first index of the word/character as an integer
    cout << phrase.substr(7, 3) << "\n";        //phrase.substr(indexstart, amount of characters to return as an integer)
    cout << "This is the substring: " << subphrase;
    return 0;
}
