#include <iostream>

using namespace std;

/*

We first take the maximum number given.

Based on this number we find every multiple of 3 or 5.

By using the or statement we can get every multiple of 3 or 5 underneath the maximum number given.
    We add every multiple to total aswell.

Finally we print the total of the multiples.

*/

int main() {

    int highestNumber;
    int total = 0;

    cout << "What number do you want to be the highest?" << endl;
    cin >> highestNumber;
    
    for(int i = 3; i < highestNumber; i++) {

        if(i % 3 == 0 || i % 5 == 0) {
            total += i;
        }

    }

    cout << total << endl;;

    return 0;

}