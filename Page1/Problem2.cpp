#include <iostream>

using namespace std;

/*

We first take the maximum number given.

We reccursively find each number in the fibonacci sequence.
    If number is even we add to total.

Finally we print the total of the even numbers in the fibonacci sequence.

*/

int fibonacci(int highestNumber, int x, int y, int total) {

    if(y > highestNumber) {
        return total;
    } else {
        int z = x + y;
        if(z % 2 == 0) {
            total += z;
        }
        fibonacci(highestNumber, y, z, total);
    }

}

int main() {

    int highestNumber;

    cout << "What number do you want to be the highest?" << endl;
    cin >> highestNumber;
    
    cout << fibonacci(highestNumber, 1, 1, 0) << endl;;

    return 0;

}