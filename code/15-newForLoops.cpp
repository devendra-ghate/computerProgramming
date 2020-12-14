#include <iostream>

using namespace std;

int main(){
   // New syntax is closer to higher level languages like Python
   for(int x : {4, 2, 3})
      cout<<x<<endl;
   
   int a[3];
   a[0] =4; 
   a[1] =2; 
   a[2] =3; 
   for(int x=0; x < 3; x++)
      cout << a[x] << endl;


   return 0;
}
