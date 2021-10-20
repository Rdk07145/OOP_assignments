#include <iostream>
#include<fstream>
#include<string>
using namespace std;
class employee
{
  public:
  string name;
  long pn,id;
  void add()
  {
    fstream st;
    
    st.open("Employeefile.txt",ios::app);
    
    cout << "\n\nEnter employee's name: ";
    cin >> name;
    cout <<"Enter employee's ID.: ";
    cin >> id;
    cout << "Enter employee's phone no.: ";
    cin >> pn;
    
    
    st << "\n\nEmployee's name : ";
    st<< name;
    st <<"\nEmployee's ID.: ";
    st << id;
    st << "\nEmployee's phone no.: ";
    st << pn;
    
    st.close();    
    
    }
  


  void read()
  {
  	
	ifstream f("Employeefile.txt"); 
	
	if(!f) //  Checking whether file exist
	{
		cout<<"\n\nNo such file";
	}	
	else
	{
    
    cout << "\n\nInformation stored in the file are: "<<endl;
		string ch;
		while (getline(f,ch))
		{
		
			cout << ch<<"\n"; // Message Read from file
			
		}
		f.close(); // Closing file
	}
  	
}
};


int main()
 {
  employee E;
  enter:
  int y;
  cout << "\n\nChoose option\n1.Add details\n2.View file";
  cout <<"\nInput: ";
  cin >> y;

  if (y==1)
  {
 	  E.add();
    goto enter;
  }

  if(y==2)
  {
 	  E.read();
     cout <<"\n\n\n";
     //system("PAUSE");
     goto enter;
  }
 }


