#include <iostream>
#include <iomanip>
#include <cstdlib>

#define NUMBER 999999999

using namespace std;
// Find the even integers.
int main(){
   int n;
   int tmp;
   cin >> n;
   long double *pa = new long double [n];
   // Initialisation
   for(int i=0;i<n;i++){
      pa[i] = rand();
   }
   int counter=0;
   cout << "Go check the memory usage on your os\n";
   // Find the process id using `ps` and then use `pmap`. Other any
   // other tool.
   cin >> tmp;
   // Processing
   for(int i=0;i<n;i++){
      if(pa[i] < NUMBER){
         pa[counter] = pa[i];
         counter++;
      }
   }
   cout << "Number of even entries are " << counter << endl;
   int *pb = new int [counter];
   for(int i=0;i<counter;i++){
      pb[i] = pa[i];
   }
   delete [] pa;
   cout << "I am done with processing the data and have removed unwanted elements of the array. Check the memory again.\n";
   int *t = new int [1000];
   cin >>tmp;
   return 0;
}
