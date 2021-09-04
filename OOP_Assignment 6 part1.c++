#include <iostream>
using namespace std;

class ICA;
class TEE
{
  private:
  float math_m1, OOP_m1, SE_m1, DS_m1;

  public:
  void input()
  {
   cout << "\nEnter TEE marks out of 50:- ";

   cout << "\n\nEnter Maths marks: ";
   cin >> math_m1;

   cout << "Enter OOP marks: ";
   cin >> OOP_m1;

   cout << "Enter SE marks: ";
   cin >> SE_m1;

   cout << "Enter DS marks: ";
   cin >> DS_m1;
  }
   friend void final_marks(TEE,ICA);

};

class ICA
{
  float math_m1, OOP_m1, SE_m1, DS_m1;
  
  public:
  void input()
  {
   cout << "\n\nEnter ICA marks out of 50:- ";
   
   cout << "\n\nEnter Maths marks: ";
   cin >> math_m1;

   cout << "Enter OOP marks: ";
   cin >> OOP_m1;

   cout << "Enter SE marks: ";
   cin >> SE_m1;

   cout << "Enter DS marks: ";
   cin >> DS_m1;
  }
  friend void final_marks(TEE,ICA);
};


void final_marks(TEE T,ICA I)
{
  cout <<"\n\nThe final marks of the student are: ";
  float maths = T.math_m1 + I.math_m1;
  float OOP = T.OOP_m1 + I.OOP_m1;
  float SE = T.SE_m1 + I.SE_m1;
  float DS = T.DS_m1 + I.DS_m1;

  cout << "\nMaths marks: "<<"\t"<< maths;
  cout << "\nOOP marks: "<<"\t\t"<< OOP;
  cout << "\nSE marks: "<< "\t\t"<< SE;
  cout << "\nDS marks: "<<"\t\t"<< DS;

float Total = maths + OOP + SE + DS;
  cout <<"\n\nTotal marks: "<<Total <<"/500";
}


//Driver function
int main()
{
  TEE T;
  ICA I;
  T.input();
  I.input();
  final_marks(T,I);
}
