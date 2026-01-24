//  Display n Terms of Natural Numbers and Their Sum

// Write a program in C++ to display n terms of natural numbers and their sum.

// Sample Output:
// Input a number of terms: 7
// The natural numbers upto 7th terms are:
// 1 2 3 4 5 6 7
// The sum of the natural numbers is: 28

#include <iostream>
using namespace std;

int main () {
    int n ;
    int sum = 0;

    cin >> n;

    for (int i =1; i <= n ; i++) {
        cout<<i<<endl;
        sum = sum + i;
    }

    cout << sum <<endl;

    return 0;
}