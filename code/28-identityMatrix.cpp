#include <iostream>

using namespace std;

int main(){
   int n=10; double a[10][10];
   for(int i=0; i<10; i++){
      for(int j=0; j<10; j++){
         a[i][j] = double((i==j));
         cout << i << j << a[i][j] << endl;
      }
   }

   return 0;
}
