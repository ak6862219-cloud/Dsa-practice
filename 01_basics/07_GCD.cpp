//7. Greatest common divisor(GCD)
#include<iostream>
using namespace std;

int gcd(int a, int b){
    int res =min(a,b);
    while(res>0){
        if(a%res==0 && b%res ==0){
            break;
        }
        res--;
    }
    return res;
}
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"gcd is: "<<gcd(a,b)<<endl;
    return 0;
}