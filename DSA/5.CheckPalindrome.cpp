//5. Chech a number is palindrome or not if number is palindrome output true else false

#include<iostream>
using namespace std;
bool checkPalindrome(int n){
    int reverse =0;
    int temp =n;
    while(temp !=0){
        reverse = (reverse*10)+ (temp%10);
        temp /=10;
    }
    return (reverse ==n);
}
int main(){
    int n;
    cout <<"enter n: ";
    cin>>n;
    if(checkPalindrome(n) ==1){
        cout <<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }
    return 0;
}