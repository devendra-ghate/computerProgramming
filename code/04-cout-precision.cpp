#include <iostream>
#include <iomanip>
using namespace std;

int main(){
   double a;
   float b;
   a = 3.1415;
   b = 3.1415;
   cout << "Float:" << endl;
   cout << fixed << setprecision(5) << "5\t"<< b << endl;
   cout << fixed << setprecision(8) << "8\t"<< b << endl;
   cout << fixed << setprecision(9) << "9\t"<< b << endl;
   cout << fixed << setprecision(15) << "15\t"<< b << endl;
   cout << fixed << setprecision(25) << "25\t"<< b << endl;
   cout << endl << endl;
   cout << "Double:" << endl;
   cout << fixed << setprecision(3) << "3\t"<< a << endl;
   cout << fixed << setprecision(4) << "4\t"<< a << endl;
   cout << fixed << setprecision(5) << "5\t"<< a << endl;
   cout << fixed << setprecision(15) << "15\t"<< a << endl;
   cout << fixed << setprecision(25) << "25\t"<< a << endl;
   //cout.setf(ios::fixed);
   //cout << setprecision(3) << a << endl;

   return 0;
}
