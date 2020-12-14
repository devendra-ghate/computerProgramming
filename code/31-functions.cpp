#include <iostream>
using namespace std;

//Function prototypes
int encrypt(int);
int decrypt(int);

int main(){
   int n, nEncrypted, nDecrypted;

   n = 4;
   nEncrypted = encrypt(n);
   nDecrypted = decrypt(nEncrypted);
   cout << nEncrypted << endl;
   cout << nDecrypted << endl;

   cout << decrypt(encrypt(n)) << endl;

   return 0;
}

// Function definitions
// But the function source code can be read here.
// So let us include it in separate files.
int encrypt(int i){
   return i+3;
}

int decrypt(int i){
   return i-3;
}

