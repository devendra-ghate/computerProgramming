#include <iostream>

int main(){
   using std::cin;
   using std::cout;
   using std::endl;
   int i, ss=2;
   cout << "Going inside the loop" << endl;
   for(i=0; i < 100; i=i+ss){
      cout << i << endl;
      ss = 2*ss;
   }
   return 0;
}
