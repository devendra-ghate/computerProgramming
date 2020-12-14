#include <iostream>
#include <iomanip>

using namespace std;

void setVariable(int i){
   i = 3;
   cout <<"i from setVariable function: "<<i<<endl;
}

int main(){
   int i;
   i=2;
   cout <<"i from main before function: "<<i<<endl;
   setVariable(i);
   cout <<"i from main after function: "<<i<<endl;
   return 0;
}

