#include <iostream>

using namespace std;

int main(){
   int a;
   int errCode;
   cout << "Please enter 1" << endl;
   cin >> a;
   if (a > 0){
      cout << "Bravo!!! You still have some brain cells left." << endl;
      errCode = 0;
   }
   else if (a == 1 ){
      cout << "Ahh!! You seem to be mathematically challenged." << endl;
      errCode = 1;
   }
   else{
      cout << "May I suggest a good course in typing..." << endl;
      errCode = 2; 
   }
   return errCode;
}
