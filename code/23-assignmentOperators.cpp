#include <iostream>

using namespace std;

int main(){
   int i=1;
   double d=1.0;
   cout << "Integer i = " << i << endl;
   cout << "Integer: (i+= 3) : " << (i+= 3) << endl;
   cout << "Integer: (i-= 2) : " << (i-= 2) << endl;
   cout << "Integer: (i*= 2) : " << (i*= 2) << endl;
   cout << "Integer: (i/= 2) : " << (i/= 2) << endl;
   cout << "Integer: (i%= 2) : " << (i%= 2) << endl;

   cout << "Double d = " << d << endl;
   cout << "Double: (d+= 3.5) : " << (d+= 3.5) << endl;
   cout << "Double: (d-= 2) : " << (d-= 2) << endl;
   cout << "Double: (d*= 2) : " << (d*= 2) << endl;
   cout << "Double: (d/= 2) : " << (d/= 2) << endl;
   //cout << "Double: (d%= 2) : " << (d%= 2) << endl;
   return 0;
}
