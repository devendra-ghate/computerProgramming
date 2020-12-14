#define PI 3.1415
#define SQUAREAREA(l,w) l*w
#define CIRCLEAREA(r) PI*r*r
int main(){
   cout << PI << endl;
   double l=1.0, w=0.5;
   cout << SQUAREAREA(l,w) << endl;
   double r=1;
   cout << CIRCLEAREA(r) << endl;
   return;
}
