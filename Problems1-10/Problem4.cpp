#include <iostream>
#include <cmath>

using namespace std;

/*

This program can have two for loop, so that we can go through every single iteration.

After multiplying two three digit multiples to check if is is a palindrome.

The number is a palindrome if it can read both front and back the same way.
    The algorithm used here to check this is  interesting.
    We take the number and and get the remainder from 10 we then add this to the new number.
    In the end we check if both numbers are the same.
    
    Algo  in action:
    Number               Mirror                Original
    1234                 0                     1234
    123                  4                     1234
    12                   43                    1234
    1                    432                   1234
    0                    4321                  1234

To reduce the time taken to find the palindrome we have the largest palindrome so we do not check the palindrome
if it is too small.

*/

bool isPalindrome(int number) {
    int original = number;
    int mirror = 0;
    while (number) {
        mirror = mirror * 10 + number % 10;
        number /= 10;
    }
    return mirror == original;
}

int main(){
    int largestPalindrome = 0;
    int temp = 0;

    for(int i = 999; i>99; i--) {
        for(int j = 999; j>99; j--) {
            temp = i*j;                
            if(temp < largestPalindrome) {
                break;
            } else if(isPalindrome(temp)) {
                largestPalindrome = temp;
            }
        }
    }

    cout << largestPalindrome << endl;
    return 0;
}