// 10.division
#include <iostream>
using namespace std;

    int divide(int dividend, int divisor) {
    int div = dividend/divisor;
    return div;
    }
    
    int main(){
        int dividend,divisor;
        cout<<"Enter Dividend: ";
        cin>>dividend;
        cout<<"Enter divisor: ";
        cin>>divisor;
        cout<<"Answer is:"<<divide(dividend,divisor)<<endl;
    }