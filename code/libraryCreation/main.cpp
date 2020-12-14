#include <iostream>
using namespace std;

#include "./myEncryptionPackage.h"

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
