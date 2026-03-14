#include <iostream>
using namespace std;

int main() {
    int a[3]; //5 box int ke create hoge jis me imput value dege
    int n = sizeof(a)/sizeof(a[0]);
     cout << "Enter 3 numbers: ";
     for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    return 0;
}