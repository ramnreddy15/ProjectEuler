#include <iostream>
#include <cmath>

using namespace std;

/*



*/

void doSieve(int (&prime)[20]) {
    int N  = sizeof(prime)/sizeof(prime[0]);
    for(int i = 0; i < N; i++) { // Makes all number equal to itself
        prime[i] = i;
    }

    for(int i = 2; i * i < N; i++) {
        if (prime[i] == i) { // Starts with primes
            for (int j = i * i; j < N; j += i) { // Divides all numbers
                if (prime[j] == j) {
                    prime[j] = i;
                }
            }
        }
    }

}

int main(){

    int factorizedArr[20];
    doSieve(factorizedArr);
    for(int i = 0; i<sizeof(factorizedArr)/sizeof(factorizedArr[0]); i++) {
        cout << factorizedArr[i] << endl;
    }


    return 0;
}