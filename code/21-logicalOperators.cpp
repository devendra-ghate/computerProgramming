#include <iostream>

using namespace std;

int main(){
   bool a, b;
   cout << "Input a (boolean):" << endl;
   cin >> a;
   cout << "Input b (boolean):" << endl;
   cin >> b;
   cout << "L O G I C A L Operators -----" << endl;
   cout << "AND " << (a && b) << endl;
   cout << "OR " << (a || b) << endl;
   cout << "NOT(a) " << (!a) << endl;
   cout << "NOT(b) " << (!b) << endl;

   return 0;
}

// What is the output for a=1, b=4 ??
