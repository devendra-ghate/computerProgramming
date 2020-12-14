#include <iostream>
#include <iomanip>

using namespace std;

void modifyScalar(int *aa){
   *aa = 2;
}

int main(){
   int a=1;
   cout << a << endl;
   modifyScalar(&a);
   cout << a << endl;
   return 0;
}

