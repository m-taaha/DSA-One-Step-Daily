/*
The Problem -
You are given an array containing $n$ distinct numbers taken from the range $0$ to $n$. Since there are $n$ numbers in the array but the range is $0$ to $n$ (which is n+1 numbers total), exactly one number is missing. Your goal is to find it.
Example: 
Input: nums = [3, 0, 1] 
n (size): 3 
Range: 0, 1, 2, 3
Missing Number: 2
*/

#include <iostream>
using namespace std;
int missingNumber(int arr[], int n) {
    // range 0 to n 
   for(int i = 0; i <= n; i++){

    bool found = false;

    for(int j = 0; j < n; j++) {
        if(arr[j] == i) {
            found = true;
            break; //stop searching once found
        }
    }

    
    if(!found) {
         cout << "This number is missing" << endl;
        return  i; //this number is missing
    }
   }

   return -1;
}


int main () {

 int arr[] = {3, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << missingNumber(arr, n) << endl;


    return 0;
}