// 1.Print the Hello World
// #include<iostream>
// using namespace std;
// int main(){
//     cout <<"Hello World";
// }

//2. Given a number the task is to return the count od digits

// #include <iostream>
// using namespace std;
// int countDigit(long long n){
//     if(n ==0){
//         return 1;
//     }
//     int count =0;
//     while(n !=0){
//         n/=10;
//         count ++;
//     }
//     return count; 
// }
// int main(void){
//     long long n;
//      cout << "Enter a number: ";
//     cin >> n;   //  User se input lene ke liye
   
//     cout<<"Number of digit: "<<countDigit(n);
    
// }

//3. Trailing Zeros in factorial
// #include<iostream>
// using namespace std;
// int CountTrailingZeros(int n){
//     int res =0;
//     for(int i =5;i<n;i*=5){
//         res +=(n/i);
//     }
//     return res;
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<"Trailing Zeros: "<<CountTrailingZeros(n)<<endl;
//     return 0;
// }

//4. WAP check prime or not 
//  #include <stdio.h>

// int main() {
    
//     int a;
//     printf("Enter a: ");
//     scanf("%d",&a);
//     if(a<=1){
//         printf("Not a prime");
//     }
//     int c=0;
//     for(int i =2; i<a;i++){
//         c++;
//     }
//     if(c == 0){
//         printf("Not a prime");
//     }else{
//         printf("prime");
//     }

//     return 0;
// }

//5. Chech a number is palindrome or not if number is palindrome output true else false

// #include<iostream>
// using namespace std;
// bool checkPalindrome(int n){
//     int reverse =0;
//     int temp =n;
//     while(temp !=0){
//         reverse = (reverse*10)+ (temp%10);
//         temp /=10;
//     }
//     return (reverse ==n);
// }
// int main(){
//     int n;
//     cout <<"enter n: ";
//     cin>>n;
//     if(checkPalindrome(n) ==1){
//         cout <<"TRUE"<<endl;
//     }else{
//         cout<<"FALSE"<<endl;
//     }
//     return 0;
// }

//6. To calculate the factorial 

// #include<iostream>
// using namespace std;
// unsigned int factorial(unsigned int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     cout <<"enter n: ";
//     cin>>n;
//     cout<< "Factorial of "<< n <<" is "<<factorial(n)<<endl;
//     return 0;
// }

//7. Greatest common divisor(GCD)
// #include<iostream>
// using namespace std;

// int gcd(int a, int b){
//     int res =min(a,b);
//     while(res>0){
//         if(a%res==0 && b%res ==0){
//             break;
//         }
//         res--;
//     }
//     return res;
// }
// int main(){
//     int a,b;
//     cout<<"Enter a: ";
//     cin>>a;
//     cout<<"Enter b: ";
//     cin>>b;
//     cout<<"gcd is: "<<gcd(a,b)<<endl;
//     return 0;
// }

//8. Temperature conversion
// #include <iostream>
// using namespace std;

// float CelToFar(int cel){
//     return (9*cel/5)+32;
// }


// int main() {
//   int cel;
//   cout<<"Enter Celsius temp: ";
//   cin>>cel;
//   double Far = CelToFar(cel);
//   cout<<"Far temp is: "<<Far<<endl;
   

//     return 0;
// }

//9.Digits in factorial
// #include<iostream>
// #include<cmath>
// using namespace std; 
//     int digitsInFactorial(int n) {
//         // code here
//       if(n<=1) return 1;
//       double sum = 0;
//       for(int i =1; i<=n;i++){
//           sum +=log10(i);
//       }
//       return floor(sum) +1;
//     }
//     int main(){
//         int n;
//         cout<<"Enter n: ";
//         cin>>n;
//         cout<<"The no of digits in factorial:" <<digitsInFactorial(n);
//     }

//10. division
// #include <iostream>
// using namespace std;

//     int divide(int dividend, int divisor) {
//     int div = dividend/divisor;
//     return div;
//     }
    
//     int main(){
//         int dividend,divisor;
//         cout<<"Enter Dividend: ";
//         cin>>dividend;
//         cout<<"Enter divisor: ";
//         cin>>divisor;
//         cout<<"Answer is:"<<divide(dividend,divisor)<<endl;
//     }

// #include <iostream>
// using namespace std;
// void fun1(){
//     cout<<"fun1\n";
// }
// void fun2(){
//     cout<<"Before fun1\n";
//     fun1();
//     cout<<"After fun1\n";
// }
// int main() {
//     // Write C++ code here
//     cout<<"Before fun2\n";
//     fun2();
//     cout<<"After fun2\n";
//     return 0;
// }

