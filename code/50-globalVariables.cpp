#include <iostream>

using namespace std;

int a {1};

void change(){
   cout << "Printing a in change before modification " << a << endl;
   a = 100;
   cout << "Printing a in change after modification " << a << endl;
}

int main(){
   int a;
   cout << "Printing a in main " << a << endl;
   a = 10;
   cout << "Printing a in main after modification " << a << endl;
   change();
   cout << "Printing a in main after calling change " << a << endl;

   return 0;
}

