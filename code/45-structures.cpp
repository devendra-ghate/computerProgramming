#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

enum Gender {Male, Female};

struct Student{
   string name;
   int rollNo;
   Gender gender;
};

int main(){

   Student first = {"Dadabhai Naoroji", 0, Male};

   cout << first.name\
      << " "\
      << first.rollNo\
      << " "\
      << first.gender\
      << endl;

   cout << (&first)->name\
      << " "\
      << (&first)->rollNo\
      << " "\
      << (&first)->gender\
      << endl;

   /*
    * Array of structures
    */
   Student s[10];
   // Instead of String name[10]; int rollNo[10]; bool gender[10];
   s[0].name = "Jyotiba Phule";
   s->rollNo = 1;
   s[0].gender = Male;

   s[1].name = "Savitribai Phule";
   (s+1)->rollNo = 2;
   s[1].gender = Female;

   cout << s->name\
      << " "\
      << s[0].rollNo\
      << " "\
      << s->gender\
      << endl;

   cout << (s+1)->name\
      << " "\
      << s[1].rollNo\
      << " "\
      << (s+1)->gender\
      << endl;

  /*.
   * .
   * . procesing
   * .
   */

  /*
   * Dynamic declaration
   */

   Student *ps;
   ps = new Student [10];

   ps[0].name = "Jyotiba Phule";
   ps[0].rollNo = 1;
   ps[0].gender = Male;

   cout << ps->name\
      << " "\
      << ps->rollNo\
      << " "\
      << ps->gender\
      << endl;

   (ps+ 1)->name = "Savitribai Phule";
   (ps+ 1)->rollNo = 2;
   (ps+ 1)->gender = Female;

   cout << (ps+1)->name\
      << " "\
      << (ps+1)->rollNo\
      << " "\
      << (ps+1)->gender\
      << endl;

   delete [] ps;

   /*
    * I can also declare constant structures like any variable.
    */
   const Student ss = {"Raja Rammohan Roy", 3, Male};
   // ss.name = "Iswar Chandra Vidyasagar"; Not allowed since ss is
   // declared a constant.

   /*
    * I can also declare a constant arrays of structures. Find out the
    * syntax.
    */

   return 0;
}

