
#include <iostream>
using namespace std;

int main() {
    
    // declaring 2D array
// int arr[4] [3];

// intilaize array

// int arr [3] [2] = {
//     {10,20},
//     {30,40},
//     {50,60},
// };

// cout << arr [0] [1] << endl;

// traverse the entire array
int rowSize = 3;
int colSize = 2;

// for(int rowIndex = 0; rowIndex < rowSize; rowIndex++){
//     for (int colIndex = 0; colIndex < colSize; colIndex++){
//         cout << arr [rowIndex] [colIndex] << " ";
//     }
//     cout << endl;
// }

// if we only put one elmenent in the array ... and the rest of the rows and columns will be )

int arr [3] [2] = {
    {10, 20}
};

for(int rowIndex = 0; rowIndex < rowSize; rowIndex++){
    for (int colIndex = 0; colIndex < colSize; colIndex++){
        cout << arr [rowIndex] [colIndex] << " ";
    }
    cout << endl;
}



    return 0;
}