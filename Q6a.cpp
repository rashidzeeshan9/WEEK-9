#include <iostream>
using namespace std;


int sumArray(int arr[], int size) {
   
    if (size == 0) {
        return 0;
    }

    
    return arr[size - 1] + sumArray(arr, size - 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); 

    
    int totalSum = sumArray(arr, size);

    
    cout << "The sum of the array elements is: " << totalSum << endl;

    return 0;
}