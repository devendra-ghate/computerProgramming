#include <iostream>
using namespace std;
enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
int main()
{
    week today;
    today = Wednesday;
    cout << "Day " << today+1 << endl;
    return 0;
}

//#include <iostream>
//using namespace std;
//enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32};
//int main() {
    //seasons s;
    //s = summer;
    //cout << "Summer = " << s+1 << endl;
    //return 0;
//}
