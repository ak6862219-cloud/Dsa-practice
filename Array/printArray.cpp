#include <iostream>
using namespace std;

int main() {
    int a[3];
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Enter 3 numbers: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << "Array elements are: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}