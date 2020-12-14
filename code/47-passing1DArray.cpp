#include <iostream>

using namespace std;

void modifyArray(int *aa){
   aa[0] = 10;
}

int main(){
   int *a;
   a = new int[3];
   a[0] = 1; a[1] = 2; a[2] = 3;
   cout << a[0] << endl;
   modifyArray(a); // Passing array by reference
   cout << a[0] << endl;
   return 0;
}

