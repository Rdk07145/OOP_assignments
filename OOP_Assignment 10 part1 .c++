#include <iostream>
#include<fstream>
#include<string>
using namespace std;

class file
{
  public:
  char data1[100];
  string file1;
  char data2[100];
  string file2;

  void add1()
  {
    cout <<"\n\nGive the name for file 1: ";
    getline( cin, file1 );
    
    ofstream st;
    st.open(file1.c_str(),ios::app);//to give the file name from the user input
    
    cout << "\n\nEnter data for file 1 : "<<endl;
    cin.getline(data1,100);
    
    st<< data1;
   
    st.close();    
    
    }

  void read1()
  {
  	
	ifstream f(file1.c_str()); 
	
	if(!f) //  Checking whether file exist
	{
		cout<<"\n\nNo such file";
	}	
	else
	{
    
    cout << "\n\nData stored in file 1: "<<endl;
		string ch;
		while (getline(f,ch))
		{
		
			cout << ch<<"\n"; // Message Read from file
			
		}
		f.close(); // Closing file
	}
  	
}


    void add2()
  {
    cout <<"\n\nGive the name for file 2: ";
    getline( cin, file2 );
    ofstream st;
    
    st.open(file2.c_str());
    
    cout << "\n\nEnter data for file 2 : "<<endl;
    cin.getline(data2,100);
    
    st<< data2;
   
    st.close();    
    
    }


void read2()
  {
  	
	ifstream f(file2.c_str()); 
	
	if(!f) // Checking whether file exist
	{
		cout<<"\n\nNo such file";
	}	
	else
	{
    
    cout << "\n\nData stored in file 2: "<<endl;
		string ch;
		while (getline(f,ch))
		{
		
			cout << ch<<"\n"; // Message Read from file
			
		}
		f.close(); // Closing file
	}
  	
}

void append_files()
{
  ofstream st;
  st.open(file1.c_str(),ios::app);
  
  st<<"\t"<<data2;
  st.close();
  ifstream d(file1.c_str()); 
	
	if(!d) // Checking whether file exist
	{
		cout<<"\n\nNo such file";
	}	
	else
	{
    
    cout << "\n\n**Data of file 2 appended in file 1** "<<endl;
		string str;
		while (getline(d,str))
		{
		
			cout << str<<'\n'; // Message Read from file
			
		}
		d.close(); // Step 5: Closing file
	}

}
};




//Driver function
int main()
 {
 	file S; 
 	S.add1();
 	S.read1();
   S.add2();
   S.read2();
   S.append_files();
 }
