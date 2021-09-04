#include <iostream>
using namespace std;

class Employee
{
 char E_name[20];
 long int Employee_ID,s;
 long DA, HRA, TA, Gross_salary;
 char Employee_department[20];

 public:

 void display()
 {
    cout <<"\n\nName of the Employee: "<< E_name;

     cout << "\n\nEmployee ID: "<<Employee_ID;

   cout << "\n\nThe department of the employee: "<<Employee_department ;
   
   cout << "\n\nThe basic salary: "<< s;

   cout << "\n\nDearness allowance: "<< DA;
   cout << "\nHRA: "<< HRA;
   cout << "\nTA: "<< TA;
   cout << "\nEmployees' gross salary: "<< Gross_salary<<"\n\n";
  
 }


 Employee()
 {
   cout << "\n\nEnter name of the Employee: ";
   cin.getline(E_name,20);

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
 }

};

//Driver function
int main() 
{
  Employee E;//implementation of Default constructor
  E.display(); 
}
