#include <iostream>
using namespace std;

//cube
double vol(double x)
{
  double cvol;
  cvol = x*x*x;
  return cvol;
}

//sphere
float vol(float x)
{
  float cvol;
  cvol = (1.33333)*(3.1415)*(x*x*x);
  return cvol;
}

//cylinder
float vol(float x,float y)
{
  float cvol;
  cvol = (3.1415)*(x*x)*(y);
  return cvol;
}

//cone
double vol(double x,double y)
{
  double cvol;
  cvol = (0.3333)*(3.1415)*(x*x)*(y);
  return cvol;
}


int main() {

  double a1,a5,a6; //as above a1, and a5 are copied in int x
  float a2,a3,a4;


   cout << "\nEnter the length of the side of the cube: ";
   cin >> a1;

   cout << "\nEnter the radius of the sphere: ";
   cin >> a2;

   cout << "\nEnter the radius of the cylinder: ";
   cin >> a3;
   cout << "Enter th eheight of the cylinder: ";
   cin >> a4;

   cout << "\nEnter the radius of the cone: ";
   cin >> a5;
   cout << "Enter the height of the cone: ";
   cin >> a6;

     cout << "\nThe volume of the cube is: "<< vol(a1);
     cout << "\nThe volume of the sphere is: "<< vol(a2);
     cout << "\nThe volume of the cylinder is: "<< vol(a3,a4);
     cout << "\nThe volume of the cone is: "<< vol(a5,a6);


   cout << "\nThe total volume is: "<< vol(a1) + vol(a2) + vol(a3,a4) + vol(a5,a6);

  
}
