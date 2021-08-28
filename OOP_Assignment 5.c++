#include <iostream>
using namespace std;

class Employee
{
 private:
 int x;

 public:
 
 long int Employee_ID;
 long DA, HRA, TA, Gross_salary,basic_salary;
 const char *Employee_department; // for dynamic costructor

 void display()
 {
   cout << "\n\nDearness allowance: "<< DA;
   cout << "\nHRA: "<< HRA;
   cout << "\nTA: "<< TA;
   cout << "\nEmployees' gross salary: "<< Gross_salary<<"\n\n";
  
 }


 Employee(int s)//Implementation of constructor overloading
 {
   //Implementation of dynamic constructor
   Employee_department = new char[20]; 
   Employee_department = "HR";

   cout << "\n\nThe department of the employee: "<<Employee_department ;
   
   cout << "\n\nThe basic salary: "<< s;
  

   DA = (0.5*s);
   HRA = (0.3*s);
   TA = (0.1*s);
   Gross_salary = s + DA + HRA + TA;
 }



 Employee(char name[20]) //constructor overloading
 {
   cout << "Enter employee ID: ";
   cin >> Employee_ID;
   cout <<"\n\nName of the Employee: "<< name;
 }



Employee(const Employee &A) //Implementation of copy constructor
{
 x = A.Employee_ID;
 cout << "\n\nEmployee ID: "<<x;
}



 ~Employee() //Implementation of destructor (to avoid memeory leak)
 {
   delete[] Employee_department;
 }
};

//Driver function
int main() 
{
   char E_name[20];
   //char E_dept[20];
   int E_Salary;
  cout << "\n\nEnter name of the Employee: ";
  cin.getline(E_name,20);

  cout << "Enter basic salary of the employee: ";
  cin >> E_Salary;

  Employee A(E_name);
  Employee E(40000);
  Employee B = A;
  E.display(); //implementation of Default constructor
}
