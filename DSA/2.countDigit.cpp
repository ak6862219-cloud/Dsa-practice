//1. Given a number the task is to return the count od digits

#include <iostream>
using namespace std;
int countDigit(long long n){
    if(n ==0){
        return 1;
    }
    int count =0;
    while(n !=0){
        n/=10;
        count ++;
    }
    return count; 
}
int main(void){
    long long n;
     cout << "Enter a number: ";
    cin >> n;   //  User se input lene ke liye
   
    cout<<"Number of digit: "<<countDigit(n);
    
}