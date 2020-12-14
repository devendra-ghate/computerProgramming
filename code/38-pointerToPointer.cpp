#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   int x=10;
   int *px;
   int **ppx;
   px = &x;
   ppx = &px;
   cout << x << endl;
   cout << *px << endl;
   cout << **ppx << endl;

   **ppx = **ppx + 1; 
   cout << x << endl;

   return 0;
}

