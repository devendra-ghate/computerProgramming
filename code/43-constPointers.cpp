#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   //const int a=1;
   //const int *pa;
   //pa = &a;
   //*pa = 2;
   //cout << "Changed number is " << a << endl;

   //const int b=1;
   //int *pb;
   //pb = &b;

   //int c=1;
   //int *pc;
   //pc = &c;
   //*pc = 2;
   //cout << "Changed number is " << c << endl;

   int a= 2, d=1;
   const int *pd;
   pd = &d;
   d = 2;
   //pd = &a;
   cout << *pd << endl;
   //*pd = 2; // Is this pointer able to change d which is clearly not const?
   d = 3; // Can I change it directly?
   cout << "Changed number is " << d << endl;

   return 0;
}

