#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

class file
{
  public:
  char data1[100];
  char data2[100];

  void add1()
  {
    
    ofstream st;
    st.open("file1.txt",ios::out);
    
    cout << "\n\nEnter data for file 1 : "<<endl;
    cin.getline(data1,100);
    
    st<< data1;
   
    st.close();    
    
    }

  void read1()
  {
  	
	ifstream f("file1.txt"); ; 
	
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
    ofstream st;
    st.open("file2.txt",ios::out);
    
    cout << "\n\nEnter data for file 2 : "<<endl;
    cin.getline(data2,100);
    
    st<< data2;
   
    st.close();    
    
    }


void read2()
  {
  	
	ifstream f("file2.txt"); 
	
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

void equivalence()
{
  char s1[100], s2[100];

  ifstream st,f;
	st.open("file1.txt",ios::binary);
	f.open("file2.txt",ios::binary);

	while(!st.eof())
	{
		st.getline(s1,100);
		f.getline(s2,100);
	
		if(strcmp(s1,s2) != 0)
		{
			cout << "\n\n**The content of file 1 and file 2 are not equal**" << "\n";
		}

    else
    {
      cout << "\n\n**The content of file 1 and file 2 are equal**";
    }
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
   S.equivalence();
   return 0;
 }
