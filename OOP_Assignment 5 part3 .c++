#include <iostream>
using namespace std;

class Employee
{
 private:
 int x,s;
  char Employee_department[20];
 long int Employee_ID;
 long DA, HRA, TA, Gross_salary,basic_salary;


 public:

 Employee(char name[20]) 
 {
   cout << "Enter employee ID: ";
   cin >> Employee_ID;

   cout << "Enter the department of the employee: ";
   cin >> Employee_department;

   cout << "Enter basic salary of the employee: ";
   cin >> s;
  

   DA = (0.5*s);
   HRA = (0.3*s);
   TA = (0.1*s);
   Gross_salary = s + DA + HRA + TA;

   cout <<"\n\nName of the Employee: "<< name;
 }



Employee(const Employee &A) //Implementation of copy constructor
{
 cout << "\n\nEmployee ID: "<<A.Employee_ID;

 cout << "\n\nThe department of the employee: "<<A.Employee_department ;
   
 cout << "\n\nThe basic salary: "<< A.s;

 cout << "\n\nDearness allowance: "<< A.DA;
 cout << "\nHRA: "<< A.HRA;
 cout << "\nTA: "<< A.TA;
 cout << "\nEmployees' gross salary: "<< A.Gross_salary<<"\n\n";
}


};

//Driver function
int main() 
{
   char E_name[20];
   
  cout << "\n\nEnter name of the Employee: ";
  cin.getline(E_name,20);

  Employee A(E_name); 
  Employee B = A;    //Copy constructor

}


