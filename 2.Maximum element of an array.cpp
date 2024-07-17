#include <iostream>
using namespace std;

int findmax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    cout<<"enter the size of an array:"<<endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cout<<"enter the elements of an array:"<<endl;
        cin >> arr[i];
    }

    int maxelement = findmax(arr, n);
    cout << "Maximum element in an array: " << maxelement << endl;

    return 0;
}
