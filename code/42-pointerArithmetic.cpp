#include <iostream>

using namespace std;

int main(){
   int a[10];
   for(int i=0; i<10; i++) *(a + i) = i;
   int *pi, *pe;
   // Try pi = &a; Gives an error.
   for(int i=0; i<10; i++) cout << a[i] << "\t" << &a[i] << endl;
   pi = &a[0];
   pe = &a[9];
   cout << "a is " << a << endl; // Pointer to the first element of array
   cout << "&a is " << &a << endl; // Pointer to an entire array
   cout <<"a+1 is " << (a+1) << endl;
   cout <<"&a+1 is " << (&a+1) << endl;
   cout << "pi is " << pi << endl;
   cout << "pe is " << pe << endl;
   cout << "Difference between two pointers " << int(pe-pi) << endl;
   return 0;
}
