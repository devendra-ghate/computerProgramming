#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   int *pa = new int;
   *pa = 10;
   cout << *pa << endl;
   int *pb = new int[3];
   for(int i=0;i<3;i++){
      *(pb+i) = 2*(i+1);
   }
   for(int i=0;i<3;i++){
      cout << *(pb + i) << endl;
   }

   return 0;
}
   //What happens if I do not assign memory?
   //int *pb = new int; //This is very unsafe.

