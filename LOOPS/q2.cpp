//  Sum of First 10 Natural Numbers

// Write a program in C++ to find the sum of the first 10 natural numbers.

// Sample Output:
// Find the first 10 natural numbers:
// ---------------------------------------
// The natural numbers are:
// 1 2 3 4 5 6 7 8 9 10
// The sum of first 10 natural numbers: 55

#include <iostream>
using namespace std;

int main() {
    int sum = 0 ;
    int n = 10;
    for (int i=1; i<=10; i++){
        sum = sum + i;
    }

    cout << sum << endl;
}