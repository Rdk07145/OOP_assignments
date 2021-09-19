#include <iostream>
#include <string.h>
using namespace std;

class doctor
{
  public:
  string name,area;

  void read()
  {
    cout <<"\nEnter Doctor's name: ";
    cin >> name;
    cout << "Enter Area: ";
    cin >> area;
  }

//displaying data
  void display()
  {
    cout << name << "\t\t\t\t"<< area<< endl;
  }

  int operator <(doctor d) //operator overloading
{
  if (area < d.area)
     return 1;
  
  else 
     return 0;
}

};


//Driver function
int main()
{
  int n;
  
  cout <<"Enter the no. of doctors: ";
  cin >> n;

  doctor D1[n],D2[n];

//Reading data
  for (int i=0; i<n; i++)
  {
    D1[i].read();
  }
 
 //Sorting Data
  for (int i=0; i<n; i++)
  {
    for (int j=i+1; j<n; j++)
    {
      if(D1[i].area < D2[j].area)
      {
      }

      else 
      {
        swap(D2[j],D1[i]);
      }
    }
  }

  //Displaying data
  cout << "\nDoctor's Name"<<"\t\t"<<"Region";
  for(int i=0; i<n; i++)
  {
    D1[i].display();
    D2[i].display();
  }
}
