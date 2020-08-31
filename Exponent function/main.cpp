#include <iostream>

using namespace std;

int power(int baseNum, int powerNum){
    int result = 1;

    for(int i = 0; i < powerNum; i++){
        result = result * baseNum;
    }

    return result;
}

int main()
{
    cout << power(3, 5) << endl;
    return 0;
}
