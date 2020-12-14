#include <iostream>
#include <iomanip>

// Passing array to functions by reference.
using namespace std;

void print(int a[], int);

int main(){
   int a[] = {1, 2, 3};
   int length = sizeof(a)/sizeof(a[0]);
   cout << "Length of an array " << length << endl;
   print(a, 3);
   return 0;
}

void print(int a[], int size){
  // size = sizeof(a)/sizeof(a[0]);
   cout << "Length of an array " << size<< endl;
   for(int i=0;i<size;i++)
      cout << a[i] << endl;

   return;
}
