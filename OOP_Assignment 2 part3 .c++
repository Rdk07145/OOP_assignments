#include <iostream>
using namespace std;

int i,j,n,size ,temp;
int marks[100];
int x[100];

int MAX(int x[],int n)
{
  
  for (i=0 ; i<n-1; i++)//n is not available in this function
  {
    for(j= i+1 ; j<n; j++)
    {
      if(x[i]>x[j])
      {
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
      }
    }
  }



 return x[n-1];

  
}





int MIN(int x[], int n)
{
  for (i=0 ; i<n-1; i++)//n is not available in this function
  {
    for(j= i+1 ; j<n; j++)
    {
      if(x[i]<x[j])
      {
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
      }
    }
  }



 return x[n-1];

  
}

int main() {


cout << " Enter the no. of students: ";
cin >> size;

cout << "Enter the marks of the students:\n";
for (i=0 ; i<size; i++)
{
   cin >> marks[i];
}


 cout << "\nThe maximum marks is: "<< MAX(marks,size);
cout << "\nThe minimum marks is: "<< MIN(marks,size); 
}
