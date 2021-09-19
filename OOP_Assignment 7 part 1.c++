#include <iostream>
using namespace std;

void final_marks();
class Internal;
float maths,ds,se,oop;
class External
{
  public:
  float math_m, OOP_m, SE_m, DS_m;

  public:
  External()
  {
   cout << "\nEnter TEE marks out of 50:- ";

   cout << "\n\nEnter Maths marks: ";
   cin >> math_m;

   cout << "Enter OOP marks: ";
   cin >> OOP_m;

   cout << "Enter SE marks: ";
   cin >> SE_m;

   cout << "Enter DS marks: ";
   cin >> DS_m;
  }
  
  friend void operator+ (External,Internal);

};

class Internal
{
  public:
  float math_m, OOP_m, SE_m, DS_m;
  Internal()
  {
   cout << "\n\nEnter ICA marks out of 50:- ";
   
   cout << "\n\nEnter Maths marks: ";
   cin >> math_m;

   cout << "Enter OOP marks: ";
   cin >> OOP_m;

   cout << "Enter SE marks: ";
   cin >> SE_m;

   cout << "Enter DS marks: ";
   cin >> DS_m;
  }
  friend void operator+ (External,Internal);
};


void operator+ (External T,Internal I)
{
    maths = T.math_m + I.math_m;
    oop = T.OOP_m + I.OOP_m;
    se = T.SE_m + I.SE_m;
    ds = T.DS_m + I.DS_m;
    
    cout << "\n\nTotal marks of student\n\n";
    cout << "Maths: " << maths << endl;
    cout << "OOP:  "<< oop << endl;
    cout << "SE: " << se << endl;
    cout << "DS: " << ds << endl;
    
    if(maths<50)
    {
        cout << "You have failed in Maths\n";
    }
    
    if(oop<50)
    {
        cout << "You have failed in OOP\n";
    }
    
    
    if(se<50)
    {
        cout << "You have failed in SE\n";
    }
   
    if(ds<50)
    {
        cout << "You have failed in DS\n";
    }
   
    
    cout << "\n\nTOTAL MARKS: " << (maths+oop+ds+se) << endl ;
    
    if(oop>=50 && ds>=50 && maths>=50 && se>=50)
    {
      cout << "Result: PASS";
      cout << "\n\nPercentage: "<< (((maths+oop+ds+se)/400)*100) << "%";
    }

    else
    cout << "Result: FAIL";
}



//Driver function
int main()
{
  External T;
  Internal I;
  T + I;
}
