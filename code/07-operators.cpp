// Behaviour of division operator under various input datatypes

#include <iostream>

using namespace std;

int main()
{
  int ifive, inine;
  float ffive, fnine;
  ifive = 5;
  ffive = 5;
  inine = 9;
  fnine = 9;
  cout.setf(ios_base::fixed, ios_base::floatfield);
  cout << "Integer division: 9/5 = " << inine/ ifive << "\n\n";
  cout << "Floating-point division: 9.0/5.0 = " << fnine/ffive << "\n\n";
  cout << "Mixed division: 9.0/5 = " << fnine / ifive << endl;
  cout << "Mixed division: 9/5.0 = " << inine / ffive << endl;
  cout << "Mixed division resulted in upgradation of integer variable into float before division.\n\n";
  cout << "double constants: 1e14/3.0 = " << 1.e14 / 3.0 << endl;
  cout << "float constants: 1e14f/3.0f = " << 1.e14f / 3.0f << endl;
  cout << "Mixed constants: 1e14/3.0f = " << 1.e14 / 3.0f << endl;
  return 0;
}
