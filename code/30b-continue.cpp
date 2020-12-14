#include <iostream>
#include <iomanip>

// printing even numbers
using namespace std;

int main(){
   for (int i = 0; i < 10; i++) {
     if (i%2 == 1) {
       continue;
     }
     cout << i << "\n";
   }

   return 0;
}

