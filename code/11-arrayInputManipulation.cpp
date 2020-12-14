#include <iostream>

using namespace std;

int main(){
   int number[2];
   cin >> number[0];
   cin >> number[1];
   
   cout << "Numbers are ";
   cout << number[0] << " and " << number[1] << endl;

   cout << "There sum is " << number[0] + number[1] << endl;

   number[0] = number[0]*number[0];
   number[1] = number[1]*number[1];

   cout << "Square of the numbers is " << number[0] << " and " << number[1] << endl;
   return 0;
}
