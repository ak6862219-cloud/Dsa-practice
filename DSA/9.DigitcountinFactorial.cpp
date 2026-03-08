//9.Digits in factorial
#include<iostream>
#include<cmath>
using namespace std; 
    int digitsInFactorial(int n) {
        // code here
      if(n<=1) return 1;
      double sum = 0;
      for(int i =1; i<=n;i++){
          sum +=log10(i);
      }
      return floor(sum) +1;
    }
    int main(){
        int n;
        cout<<"Enter n: ";
        cin>>n;
        cout<<"The no of digits in factorial:" <<digitsInFactorial(n);
    }