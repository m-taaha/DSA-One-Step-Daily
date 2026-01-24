// Check Whether a Number is Prime or Not

// Write a program in C++ to check whether a number is prime or not.

// Sample Output:
// Input a number to check prime or not: 13
// The entered number is a prime number.

#include <iostream>
using namespace std;

int main () {
    int n ;

    cin >> n;

    for(int i =2 ; i < n ; i++) {
        if(n% i == 0){
            cout << n << " is not a prime number" << endl;
        }
    }

    cout << n << " is a prime number" << endl;


    return 0;
}