//3. Trailing Zeros in factorial
#include<iostream>
using namespace std;
int CountTrailingZeros(int n){
    int res =0;
    for(int i =5;i<n;i*=5){
        res +=(n/i);
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Trailing Zeros: "<<CountTrailingZeros(n)<<endl;
    return 0;
}