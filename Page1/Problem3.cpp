#include <iostream>
#include <cmath>

using namespace std;

/*

We first take the maximum number given.

We take the sqaure root of that number, since all factors must be less than that number.
For example in a square like 25 the biggest factor is 5, so no factor can be bigger than its square root.

In the while loop we check to see if a number is a factor of the original number.
We also check if the number is prime.
    A number is prime when the only factors are 1 and itself.

As can be seen in the code, we increment down so we can get the biggest prime factor.

Finally we print the biggest prime factor.

Time complexity is O(log(N*log(N))))

*/

bool isPrime(int number) {

    for(int i = 2; i <= sqrt(number); i++) {
        if(number % i == 0) {
            return false;
        }
    }
    return true;

}

int main() {

    long orginalNumber;
    int number;

    cout << "What number do you want to be the highest?" << endl;
    cin >> orginalNumber;
    number = orginalNumber;
    number = sqrt(number);

    while(orginalNumber % number != 0 || !isPrime(number) && number > 1) {
        number = number - 1;
    }

    cout <<  number << endl;

    return 0;

}