#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int size_merged = size1 + size2;
    int merged_arr[size_merged];

    for (int i = 0; i < size1; ++i) {
        merged_arr[i] = arr1[i];
    }

    for (int i = 0; i < size2; ++i) {
        merged_arr[size1 + i] = arr2[i];
    }

    cout << "Merged array: ";

    for (int i = 0; i < size_merged; ++i) {
        cout << merged_arr[i] << " ";
    }

    cout << endl;

    return 0;
}
