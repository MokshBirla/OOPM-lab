#include<iostream>
using namespace std;
void shiftzeros(int arr[], int n) {
    for (int i = 0; i < n; i++) {           //Check for the Zeros in array
        if (arr[i] != 0) {
            continue;
        }
        else {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] != 0) {    //swap zero with the nearest non zero element on the right side of array
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {    //to print the array 
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 6, 0, 0, 43, 0, 5};
    shiftzeros(arr, 8);
}
