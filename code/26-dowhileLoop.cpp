#include <iostream>

using namespace std;

int main(){
   int i;
   i=20;
   cout << "Getting in with i = " << i << endl;
   do{
      i++;
      cout << i << endl;
   }while(i < 10);
   cout << "Finally out of the loop. Feeling dizzy!!!\n";
   return 0;
}
