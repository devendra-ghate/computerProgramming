#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   int *pa = new int;
   *pa = 10;
   delete pa; // Deleting a scalar variable using delete. `pa` still exists. Only address to which `pa` pointed does exist anymore.
   int *pb = new int[3];
   for(int i=0;i<3;i++){
      *(pb+i) = 2*(i+1);
   }
   for(int i=0;i<3;i++){
      cout << *(pb + i) << endl;
      cout << pb[i] << endl; // Accessing the array elements in another way.
   }
   delete [] pb; // Deleting the array. `pb` still exists.
   cout << "pb is " << pb << endl;

   return 0;
}
   //What happens if I do not assign memory?
   //int *pb = new int; //This is very unsafe.

