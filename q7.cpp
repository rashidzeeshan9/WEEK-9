#include <iostream>
using namespace std;


int findMax(int arr[], int size) {
  
    if (size == 1) {
        return arr[0];
    }

 
    int maxOfRest = findMax(arr, size - 1);


    return (arr[size - 1] > maxOfRest) ? arr[size - 1] : maxOfRest;
}


int findMin(int arr[], int size) {

    if (size == 1) {
        return arr[0];
    }

 
    int minOfRest = findMin(arr, size - 1);

    return (arr[size - 1] < minOfRest) ? arr[size - 1] : minOfRest;
}

int main() {
    int size;

  
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int* arr = new int[size];

    
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    int maxElement = findMax(arr, size);
    int minElement = findMin(arr, size);

    cout << "The maximum element in the array is: " << maxElement << endl;
    cout << "The minimum element in the array is: " << minElement << endl;

    delete[] arr;

    return 0;
}
