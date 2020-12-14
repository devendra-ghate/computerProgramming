#include <iostream>

using namespace std;

int main(){
   
   string studentName[2];
   int day[2];
   int month[2];
   int year[2];

   // Let us assume that we are going to type in the data. Usually, you
   // would read the data from a file.
   
   studentName[0] = "Marie Curie";
   studentName[1] = "Leonard Euler";
   day[0] = 15;
   month[0] = 4;
   year[0] = 1707;
   day[1] = 7;
   month[1] = 11;
   year[1] = 1867;

   cout<< "First student is " << studentName[0] << " " <<day[0]<<"/"<<month[0]<<"/"<<year[0]<<endl;
   cout<< "Second student is " << studentName[1] << " " <<day[1]<<"/"<<month[1]<<"/"<<year[1]<<endl;

   return 0;
}
