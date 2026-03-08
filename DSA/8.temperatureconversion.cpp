//8. Temperature conversion
#include <iostream>
using namespace std;

float CelToFar(int cel){
    return (9*cel/5)+32;
}

int main() {
  int cel;
  cout<<"Enter Celsius temp: ";
  cin>>cel;
  double Far = CelToFar(cel);
  cout<<"Far temp is: "<<Far<<endl;
   

    return 0;
}