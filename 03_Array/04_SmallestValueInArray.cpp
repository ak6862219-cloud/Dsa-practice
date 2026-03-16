#include <iostream>
using namespace std;

int main() {
    int a[5];
    
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }

    int smallest = a[0];

    for(int i = 1; i < 5; i++){
        if(a[i] < smallest){
            smallest = a[i];
        }
    }

    cout << "Smallest value is: " << smallest;

    return 0;
}