#include <iostream>

using namespace std;

int main(){
   int quizscores[10] = {20,20,20,20,20,18,19,20,19,20};

   cout << "Doing it right\n";
   for(int i=0; quizscores[i] == 20; i++){
      cout << "quiz " << i << " is a 20\n";
      cout << i << endl;
   }


   //Is the variable i available outside the for loop?
   cout << i;
   // Scope of a variable.

   //cout << "\n\nDoing it wrong\n";
   for(int i=0; quizscores[i] = 20; i++)
      cout << "quiz " << i << " is a 20\n";

   return 0;
}
