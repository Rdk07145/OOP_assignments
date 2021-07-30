#include <iostream>
using namespace std;

int addition(int x, int y)
{
  int s;
  s = x +y;
  cout << "The sum is: "<< s;
  return s;
}

float addition(float x, float y)
{
  float s;
  s = x +y;
  cout << "The sum is: "<< s;
  return s;
}

double addition(double x, double y)
{
  double s;
  s = x +y;
  cout << "The sum is: "<< s;
  return s;
}

short int addition(short int x, short int y)
{
  short int s;
  s = x +y;
  cout << "The sum is: "<< s;
  return s;
}

long double addition(long double x, long double y)
{
  long double s;
  s = x +y;
  cout << "The sum is: "<< s;
  return s;
}

long int addition(long int x,long int y)
{
  long int s;
  s = x +y;
  cout << "The sum is: "<< s;
  return s;
}

char addition(char x, char y)
{
  char s;
  s = x +y;
  
  cout << "The sum is: "<< s;

  return s;
}


int main() {
 int a,b;
 float c,d; 
 double e,f;
 short int g,h;
 long double i,j;
 long int k,l;
 char m,n;
 



 cout << "Enter first int: ";
 cin >> a;
 cout << "Enter second int: ";
 cin >> b;

addition(a,b);

 
  cout << "\n\nEnter first float: ";
 cin >> c;
 cout << "Enter second float: ";
 cin >> d;

addition(c,d);


  cout << "\n\nEnter first double: ";
 cin >> e;
 cout << "Enter second double: ";
 cin >> f;

addition(e,f);

  
  cout << "\n\nEnter first short: ";
 cin >> g;
 cout << "Enter second short: ";
 cin >> h;

addition(g,h);

  
  cout << "\n\nEnter first long double: ";
 cin >> i;
 cout << "Enter second long double: ";
 cin >> j;

addition(i,j);

  
  
  cout << "\n\nEnter first long int: ";
 cin >> k;
 cout << "Enter second long int: ";
 cin >> l;

addition(k,l);


   
  cout << "\n\nEnter first char: ";
 cin >> m;

 cout << "Enter second char: ";
 cin >> n;


addition(m,n);


  

 
}
