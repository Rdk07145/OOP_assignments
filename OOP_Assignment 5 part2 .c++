#include <iostream>
using namespace std;

class Employee
{
 private:
 int x;
  long DA, HRA, TA, Gross_salary,basic_salary;
 char Employee_department; 
 
 public:

 void display()
 {
   cout << "\n\nDearness allowance: "<< DA;
   cout << "\nHRA: "<< HRA;
   cout << "\nTA: "<< TA;
   cout << "\nEmployees' gross salary: "<< Gross_salary<<"\n\n";
  
 }


 Employee(char name[20], int x, char Employee_department[20]) //constructor overloading
 {
   
   cout <<"\n\nName of the Employee: "<< name;
   cout << "\n\nThe employee ID: "<< x;
   cout << "\n\nThe department of the employee: "<<Employee_department ;
 }


 Employee(int s)
 {
   
   
   cout << "\n\nThe basic salary: "<< s;
  

   DA = (0.5*s);
   HRA = (0.3*s);
   TA = (0.1*s);
   Gross_salary = s + DA + HRA + TA;


 }

};

//Driver function
int main() 
{
  char E_name[20],E_department[20];
  int E_ID,y;
  cout << "\n\nEnter name of the Employee: ";
  cin.getline(E_name,20);

  cout << "Enter employee ID: ";
  cin >> E_ID;

  cout << "Enter the department of the employee: ";
  cin >> E_department;

   cout << "Enter basic salary of the employee: ";
   cin >> y;

  Employee A(E_name,E_ID,E_department);//Implementation of constructor overloading
  Employee E(y);

  E.display(); 
}
