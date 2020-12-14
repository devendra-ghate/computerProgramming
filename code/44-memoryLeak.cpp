/* Compile using -g flag and then
 * valgrind --tool=massif --time-unit=B ./a.out
 * Output stored in massif-pid file.
 * Visualise the output using
 * ms_print massif-pid
 */

#include <iostream>

using namespace std;


void doingNothing(){
   double *ptr = new double[100000];
   // Not clearing the memory.
}

int main(){
   int a;
   doingNothing();
   // Pointer ptr is lost since the function doingNothing has been
   // completed. The array of size 100000 is still allocated in the
   // memory as I have not used delete. However, there is no way to
   // access it now since the pointer ptr pointing to the array has been
   // lost.
   return 0;
}

