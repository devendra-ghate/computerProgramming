#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// How to use break with while?
// Why use break at all? The condition can be given in the while
// statement itself.
int main(){
   int i = 0;
   while (i < 100) {
     i++;
     cout << i << "\n";
     if (i == 4) {
     //if (pow(-i,3) + pow(i,2) + 5.0*i  < 0) {
       break;
     }
   } 

   return 0;
}


