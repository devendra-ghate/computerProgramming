#include <iostream>

using namespace std;

int main(){
   int a=1;
   int b=2;
   int * const pa = &a;
   int *pb;

   // pa is now pointing to a
   cout << *pa << endl;
   // pa is now pointing to b
   pa = &b;
   cout << *pa << endl;

   // pb is now pointing to a
   pb = &a;
   // pb is now pointing to b
   pb = &b;

   return 0;
}

