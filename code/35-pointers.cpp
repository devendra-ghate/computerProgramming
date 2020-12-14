#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   int a;   // Declared a variable. Memory allocated to it by the compiler.
   cout << "Address of a is : " << &a << endl; // The memory address is printed here.
   a = 1; // Initialised the variable to 1.
   cout << "At address " << &a << " the value that is stored is " << * (&a) << endl;
   cout << "Size of address &a is " << sizeof(&a) << " Bytes."<< endl;
// Lets us declare a variable pa to store the address of a. Clearly this
// variable will store the address of an integer. In other words, it is
// going to point to an integer.
   int* pa; 
   pa = &a;
   cout << "pa is " << pa << endl;
   cout << "Value stored at pa is " << *pa << " which is of size " << sizeof(*pa) << endl;
   cout << "Size of pa itself is " << sizeof(pa) << endl;

   return 0;
}

