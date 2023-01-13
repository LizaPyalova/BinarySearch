#include <iostream>
using namespace std;

bool BinarySearch(int arr[], int x, int n) {
    int l = 0, r = n;
    while (l < r) {
        int k = (l + r) / 2;
        if (x == arr[k]) {
            return true;
        }
        else if (x < arr[k]) {
            r = k;
        }
        else if (x > arr[k]) {
            l = k + 1;
        }
    }
    return false;
}

int L(int arr[], int x, int n) {
    int l = 0, r = n;
    while (l < r) {
        int k = (l + r) / 2;
        if (x <= arr[k]) {
            r = k;
        }
        else if (x > arr[k]) {
            l = k + 1;
        }
    }
    return l;
}
int R(int arr[], int x, int n) {
    int l = 0, r = n;
    while (l < r) {
        int k = (l + r) / 2;
        if (x < arr[k]) {
            r = k;
        }
        else if (x >= arr[k]) {
            l = k + 1;
        }
    }
    return l;
}
int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int* arr1 = new int[k];
    for (int j = 0; j < k; j++)
    {
        cin >> arr1[j];
    }

    for (int j = 0; j < k; j++) {
        if (BinarySearch(arr, arr1[j], n) == true) {
            cout << "1" << " " << L(arr, arr1[j], n) << " " << R(arr, arr1[j], n) <<endl;

        }
        else cout << "0" << " " << L(arr, arr1[j], n) << " " << R(arr, arr1[j], n) << endl;
    }
    delete[] arr;
    delete[] arr1;
}