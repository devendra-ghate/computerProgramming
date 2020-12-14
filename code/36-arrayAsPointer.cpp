#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   int a[10];
   int i;
   for(i=0;i<10;i++) a[i] = 2*(i+1);
   cout << sizeof(a) << endl;
   cout << sizeof(a[0]) << endl;
   int *pa;
   pa = &a[0];
   cout << *pa << endl;
   cout << a[0] << endl;
// Adding 3 to the value stored at the address pa
   cout << *pa + 3<< endl; 
//Accessing value stored at 4th step from pa
   cout << *(pa + 3)<< endl; 

   return 0;
}

