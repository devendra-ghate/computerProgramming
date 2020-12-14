#include <iostream>
#include <iomanip>

using namespace std;

void changev(int x, int y){ // By value
   x = 10;
   y = 20;
}

void changer(int & x, int & y){ // By reference
   x = 100;
   y = 200;
}

void changep(int * x, int * y){ // By reference
   *x = 1000;
   *y = 2000;
}

int main(){

   int a=1;
   int & ra = a;
   int * pa = &a;

   int b=2;
   int & rb = b;
   int * pb = &b;

   changev(a, b); // Pass values of the variables
   cout << "In main, after change by value  :\t\t" << a << " " << b << endl;
   changer(a, b); // Pass variables
   cout << "In main, after change by reference :\t\t " << a << " " << b << endl;
   changep(&a, &b); // Pass addresses of the variables
   cout << "In main, after change by pointer :\t\t" << a << " " << b << endl;
   return 0;
}

