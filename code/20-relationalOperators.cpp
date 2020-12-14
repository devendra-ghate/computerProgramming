#include <iostream>

using namespace std;

int main(){
   int a, b;
   double c, d;
   unsigned int e;
   //cout << "I N T E G E R S -----" << endl;
   //cout << "Input a (int)" << endl;
   //cin >> a;
   //cout << "Input b (int)" << endl;
   //cin >> b;
   //cout << "a == b: " << (a == b) << endl;
   //cout << "a != b: " << (a != b) << endl;
   //cout << "a <= b: " << (a <= b) << endl;
   //cout << "a >= b: " << (a >= b) << endl;

   //cout << "D O U B L E -----" << endl;
   //cout << "Input c (double)" << endl;
   //cin >> c;
   //cout << "Input d (double)" << endl;
   //cin >> d;
   //cout << "c == d: " << (c == d) << endl;
   //cout << "c != d: " << (c != d) << endl;
   //cout << "c <= d: " << (c <= d) << endl;
   //cout << "c >= d: " << (c >= d) << endl;

   cout << "M I X E D -----" << endl;
   cout << "Input a (int)" << endl;
   cin >> a;
   cout << "Input d (double)" << endl;
   cin >> d;
   cout << "a == d: " << (a == d) << endl;
   cout << "a != d: " << (a != d) << endl;
   cout << "a <= d: " << (a <= d) << endl;
   cout << "a >= d: " << (a >= d) << endl;

   //cout << "M I X E D -----" << endl;
   //cout << "Input a (int)" << endl;
   //cin >> a;
   //cout << "Input e (unsigned int)" << endl;
   //cin >> e;
   //cout << "a == e: " << (a == e) << endl;
   //cout << "a != e: " << (a != e) << endl;
   //cout << "a <= e: " << (a <= e) << endl;
   //cout << "a >= e: " << (a >= e) << endl;

   return 0;
}

//Possible inputs:
//1
//2
//1.0
//1.0000000000000000000000001

//1
//-1
//1
//1.0

//1
//10000000000000000000000000000000
//-2.0
//1.0
//
//Modify the datatypes to unsign int, short int, long int etc.
