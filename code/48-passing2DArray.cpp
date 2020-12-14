#include <iostream>

using namespace std;

void modifyArray(int **aa, int m, int n){
   for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
         aa[i][j] = i+20*j;
      }
   }
}

void printArray(int **aa, int m, int n){
   for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
         cout << aa[i][j] << "\t";
      }
      cout << "\n";
   }
}

int main(){
   int **a;
   a = new int * [3];
   for(int i=0; i<3; i++) a[i] = new int [3];
   for(int i=0; i<3; i++){
      for(int j=0; j<3; j++) a[i][j] = i+10*j;
   }
   printArray(a,3,3);
   modifyArray(a, 3, 3);
   printArray(a,3,3);
   return 0;
}

