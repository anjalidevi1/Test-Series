#include <iostream>
using namespace std;

void arraydisplay(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main() {
    int n;
    cout<<"enter the size of an array:"<<endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i) {
            cout<<"enter the elements of an array"<<endl;
        cin >> arr[i];
    }

    cout << "Array elements: ";
    arraydisplay(arr, n);

    return 0;
}
