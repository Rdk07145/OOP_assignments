#include <iostream>
using namespace std;

class Employee
{
  char E_name[20], E_dpt[20];
  long int E_id, E_salary;
  
  public:
  //Input details
  void input()
  {
   cout << "\nEnter the employee name: ";
   cin.getline(E_name, 20);

   cout << "\nEnter employee ID: ";
   cin >> E_id;

   cout << "\nEnter the department of the employee: ";
   cin >> E_dpt;
   cout << "\nEnter salary: ";
   cin >> E_salary;
  }


//Displaying details
  void display()
  {
    cout <<"\n\n******************************************************************";
  cout <<"\n\nThe deatails of the Employee are: ";
   cout << "\n\nEmployee name: "<< E_name;

   cout << "\nEmployee ID: "<< E_id;

   cout << "\nThe department of the employee: "<< E_dpt;
  
   cout << "\n\nMonthly salary: "<< E_salary << " Rs.";
   
  }
  friend class Sales;
};



class Sales
{
  int sales;
  float incentive;
  string x;
  public:
  //Accepting sale details
  void units_sold()
  {
    
   cout << "\nUnits sold by the employee: ";
   cin >> sales;
  }


  void input(Employee E)//implementing friend class
  {

   if (50 < sales && sales <= 100)
   {
    incentive = 0.1*E.E_salary;
    x = "10%";
   }

   else if (100 < sales && sales <= 150)
   { 
     incentive = 0.2*E.E_salary;
     x = "20%";
   }

   else if (sales > 150)
   {
     incentive = 0.3*E.E_salary;
     x = "30%";
   }

   else 
   {
     cout << "\nSold units are not enough fro an incentive";
   }

    cout << "\n\n"<< x <<" Incentive acquired: "<< incentive <<" Rs.";
  } 


//Grading the employee
  void performance()
  {
    
   if (50 > sales)
   cout << "\n\nPerformance: Poor";
   
   else if (50 < sales && sales <= 100)
   cout << "\n\nPerformance: Satisfactory";

   else if (101 <= sales && sales <= 150)
   cout << "\n\nPerformance: Good";

   else if (150 < sales)
   cout << "\n\nPerformance: Excellent";

   else 
   cout << "Input a valid number";

  }
};


//Driver function
int main()
{
  Employee E;
  Sales S;
  E.input();
  S.units_sold();
  E.display();
  S.input(E);
  S.performance();
}
