#include <iostream>
using namespace std;


int main()
{
int l, sum = 0;

cout << "Enter the no. of students in the class: " ; 
cin >> l;

int *marks = new int[l]; 

cout << "Enter the marks of each student: ";
for( int i = 0; i < l; i++ ) 
{ 
cin >> *(marks+i);
}
for( int j = 0; j < l; j++ )
{
sum += *(marks+j); // sum = sum + *(marks + j)
}

float avg = (float)sum / l;  // explicit typecasting
cout << "The average marks of the class is: " << avg;

}
