#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   int x = 10;
   int *px;
   px = &x;
   cout << x << endl;
   x = x + 1;
   cout << x << endl;
   *px = *px + 1;
   cout << x << endl;
   return 0;
}

