#include <iostream>

using namespace std;

/*
 * Please note that if the case variable is an integer, then a range of
 * cases can be declared using `...` syntax as follows:
 * 
 * switch(i){
 *    case 1 ... 5 : // For i between 1 and 5
 *       break;
 *    case 6 : // For i = 6
 *       break;
 *    default :
 *
 */



int main () {
   // local variable declaration:
   char grade = 'A';
   //char grade = 'E';

   switch(grade) {
      case 'A' :
         cout << "Excellent!" << endl; 
       //   break; //Break out of the switch. Otherwise it will go through all the statements till the next break.
      case 'B' : // Do nothing
      case 'C' :
         {
         cout << "Well done" << endl;
         break;
         }
      case 'c' :
         cout << "You passed" << endl;
         break;
      case 'F' :
         cout << "Better try again" << endl;
         break;
      default :
         cout << "Invalid grade" << endl;
   }
   cout << "Your grade is " << grade << endl;

   return 0;
}
