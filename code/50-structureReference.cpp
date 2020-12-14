#include <iostream>
#include <iomanip>

using namespace std;

struct Student{
   int id;
   int marks;
};

void modifyMarks(Student & aa){
   aa.marks = 50;
}

void modifyID(Student * aa){
   aa->id = 2;
}


int main(){
   Student a;
   a.id = 1;
   a.marks = 100;
   cout << "ID is " << a.id << endl;
   cout << "Marks are " << a.marks << endl << endl;
   modifyMarks(a);
   modifyID(&a);
   cout << "ID is " << a.id << endl;
   cout << "Marks are " << a.marks << endl;

   return 0;
}

