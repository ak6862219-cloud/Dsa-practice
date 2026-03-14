#include <iostream>
using namespace std;

int main() {
    int a[3]={2,4,8};
    a[2]=6; //8 ki place pr 6 ko update kar diya gya;
    cout << "Array elements are: ";
    for(int i = 0; i < 3; i++){
        cout << a[i] << " ";
    }

    return 0;
}