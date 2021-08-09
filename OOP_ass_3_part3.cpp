#include <iostream>
using namespace std;

//cube
inline double volc(double x)
{
  
  return x*x*x;
  
}

//sphere
inline float vols(float x)
{
 return (1.33333)*(3.1415)*(x*x*x);

}

//cylinder
inline float volcl(float x,float y)
{
  return (3.1415)*(x*x)*(y);
 
}

//cone
inline double volco(double x,double y)
{
  return (0.3333)*(3.1415)*(x*x)*(y);
  
}


int main() {

  double a1 = 2 ,a5=5.55, a6 = 2.2; //as above a1, and a5 are copied in int x
  float a2 = 3, a3 = 5, a4 =2;

     cout << "\nThe volume of the cube is: "<< volc(a1);
     cout << "\nThe volume of the sphere is: "<< vols(a2);
     cout << "\nThe volume of the cylinder is: "<< volcl(a3,a4);
     cout << "\nThe volume of the cone is: "<< volco(a5,a6);


   cout << "\n\nThe total volume is: "<< volc(a1) + vols(a2) + volcl(a3,a4) + volco(a5,a6);

  
}






