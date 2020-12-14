#include <iostream>
#include <iomanip>

using namespace std;

void function(int i){
   cout << "Inside int function" << endl;
}

void function(int i, int j){
   cout << "Inside int function with two inputs" << endl;
}

void function(double i){
   cout << "Inside double function" << endl;
}

/****************************************/

// What about user defined data types?

struct IntOne{
   int i;
};

struct IntTwo{
   int i;
};

void function(IntOne i){
   cout << "Inside IntOne function" << endl;
}

void function(IntTwo i){
   cout << "Inside IntTwo function" << endl;
}

/****************************************/

// Is a data type created by typedef, treated as a separate data type?

//typedef int NUMBER;

//void function(NUMBER i){
   //cout << "Inside NUMBER function" << endl;
//}

/****************************************/

// Can I have polymorphism based on the output data type of a function?
// It is possible in other languages like `julia`

//int function(int i){
   //cout << "Inside int function that outputs int" << endl;
   //return i;
//}

/****************************************/

int main(){
   int i;
   double d;
   function(i);
   function(d);
   function(i,i);

   IntOne a;
   IntTwo b;
   function(a);
   function(b);

   return 0;
}
