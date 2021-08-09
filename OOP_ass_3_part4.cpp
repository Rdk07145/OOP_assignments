#include<iostream>
using namespace std;

void INPUT(int x,string nm[],int rn[], char c, string s)
{
 for(int i = 0; i<x; i++)
 {
   cout << "\n\nStudent's name: "<< nm[i];
   cout << "\nRoll no.: "<< rn[i];
   cout << "\nDiv: "<< c;
   cout << "\nProgramme: "<< s;
 }
}

int main()
{
 int i = 0;
 int n, s_rn[20];
 string s_name[20];
 cout << "Enter no. of students: ";
 cin >> n;

while(i != n)
 {
   cout << "\nEnter student name: ";
   cin >> s_name[i];

   cout << "Enter roll no.: ";
   cin >> s_rn[i];
   i++;
 }


 cout << "\nDisplaying student information: ";
 INPUT(n,s_name, s_rn,'D',"Btech");
}
