/*
The Problem
The Pivot Index is the position in an array where the sum of all numbers to its left is exactly equal to the sum of all numbers to its right.

If the index is at the very start (0), the left sum is considered 0.

If the index is at the very end, the right sum is considered 0.

Example:
Array: [1, 7, 3, 6, 5, 6]
At index 3 (value 6):
Left sum: 1 + 7 + 3 = 11 
Right sum: 5 + 6 = 11 
Since 11 = 11, the pivot index is 3.
*/

#include <iostream>
using namespace std;

int pivotIndex(int arr[], int n){
    for(int pivot = 0; pivot < n; pivot++){
       
        // left sum loop
        int leftSum = 0;
        for(int i = 0; i < pivot; i++){
            leftSum = leftSum + arr[i];
        }

        // right sum loop 
        int rightSum = 0;
         for(int i = pivot + 1; i < n; i++){
            rightSum = rightSum + arr[i];
        }

        if(leftSum == rightSum) {
            return pivot;
        }
    }

    return -1;
} 



int main() {
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(arr) /sizeof(arr[0]);

    cout << pivotIndex(arr, n) << endl;;
    
    return 0;
}