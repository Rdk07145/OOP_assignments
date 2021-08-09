#include <iostream>
using namespace std;

int main()
 {
  float *p = new float;
  cout << "\n\nEnter '0' to exit";

   cout << "\n\nEnter the value in inches to be converted: ";
   cin >> *p;
   if(*p > 0)
   {

   cout << "Conversion to feet is: " << (*p)/12<<" ft.";

   cout << "\nConversion to yards is: " << (*p)/36 <<" yd.";

   delete p;
   return main();
   }
  

}
