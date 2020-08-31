#include <iostream>

using namespace std;

int algorithmFloyd(int numbers[]){
    int tortoise = numbers[0];
    int hare = numbers[0];

    while(true){
        tortoise = numbers[tortoise];
        hare = numbers[numbers[hare]];
        if(tortoise == hare){
            break;
        }
    }
    hare = numbers[0];
    tortoise = tortoise;
    while(hare != tortoise){
        hare = numbers[hare];
        tortoise = numbers[tortoise];
    }

    return hare;
}

int main()
{
    int nums[] = {3, 1, 4, 5, 2, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 18};
    cout << algorithmFloyd(nums);
    return 0;


}
