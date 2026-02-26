// It is used to put the same value in a range of elements.
// fill()

// Instead of writing:

// arr[0] = 0;
// arr[1] = 0;
// arr[2] = 0;
// ...

// “Hey C++, fill everything with 0.”

// Syntax of fill()
// fill(start_pointer, end_pointer, value);

// -----------------------------------------------------------------------------------------------------------

#include <iostream>
#include <algorithm>
using namespace std;

int main () {

       // example of 1D array with fill()
    int arr[5];
    fill(arr, arr + 5, 5);

    cout << "Example of 1D Array with fill()" << endl;
    for(int i = 0; i < 5; i++) {
        cout << arr [i] << " ";
    }

    cout << endl;
    cout << endl;



    // example of 2D array with fill()
    int arr2[3][4];
    fill(&arr2[0][0], &arr2[0][0] +12, 10);

    cout << "Example of 2D Array with fill()" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}


// Explanation --
// &arr[0][0] → address of first element
// + 12 → total elements (3 × 4)
// 5 → value to fill


// Interview Tip (Very Important)--
// In interviews, sometimes they ask:
// How to initialize 2D array with -1?
// Just write:
// fill(&arr[0][0], &arr[0][0] + rows * cols, -1);
// Or using sizeof method.


// One More Important Thing ⚠️
// This works because:
// ✅ Array is fixed size
// ✅ Stored continuously in memory
// If it’s a vector of vectors:
// vector<vector<int>> v;
// Then this trick won’t work directly.