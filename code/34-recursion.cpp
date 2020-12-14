#include <iostream>

using namespace std;

unsigned long long int factorial(unsigned long long int i){
   if(i==1)
      return 1;
   else{
      return i*factorial(i-1);
}

int main(){
   unsigned long long int n;
   cin >> n;
   cout << factorial(n) << endl;
   return 0;
}
