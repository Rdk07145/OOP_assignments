#include <iostream>   //#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class Players {
  public:
    char name[50],region[20];
    int bat_avg,bowl_avg;
  
public:
    
    void readdata()
    {
        cout << "\nEnter the player's Name: ";
         cin >> name;    
        //cin.ignore();
        //cin.get(name, 50);
        cout << "Enter player's region: ";
        cin >> region;

        cout << "Enter the batting average:  ";
        cin >> bat_avg;

        cout << "Enter the bowling average: ";
        cin >> bowl_avg;
    }
  

    // Function to pass the array of
    // objects
    void generatelist(Players obj[], int size)
    {
        char a[50];

        //Batting average
         for(int i = 0; i < size; ++i) //size -1
        { 

          for(int j = i+1; j < size; ++j)//j=0;j<size-i-1

           if(obj[i].bat_avg < obj[j].bat_avg)  // >
           {
            int temp = obj[i].bat_avg;
            obj[i].bat_avg = obj[j].bat_avg;
            obj[j].bat_avg = temp;

            strcpy( a,obj[i].name);
            strcpy(obj[i].name,obj[j].name);
            strcpy(obj[j].name,a); 

            strcpy( a,obj[i].region);
            strcpy(obj[i].region,obj[j].region);
            strcpy(obj[j].region,a); 
      
           }
     
   }
   cout <<"\n\nThe Batting average ranking of the players are:-"<<endl;
    for (int i =0; i<size; i++)
     {
      cout <<"\n"<< obj[i].name<< "\t\t"<< obj[i].bat_avg<< "\t\t"<< obj[i].region;
      //cout << "\n"<<obj[i] bat_avg;
     }
        
       
       
        //Bowling average

     for(int i = 0; i < size; ++i) //size -1
        { 

          for(int j = i+1; j < size; ++j)//j=0;j<size-i-1
          
           if(obj[i].bowl_avg < obj[j].bowl_avg)  // >
           {
            int temp = obj[i].bowl_avg;
            obj[i].bowl_avg = obj[j].bowl_avg;
            obj[j].bowl_avg = temp;

            strcpy( a,obj[i].name);
            strcpy(obj[i].name,obj[j].name);
            strcpy(obj[j].name,a); 

            strcpy( a,obj[i].region);
            strcpy(obj[i].region,obj[j].region);
            strcpy(obj[j].region,a); 
      
           }
     
   }

   cout <<"\n\nThe Bowling average ranking of the players are:-"<<endl;
    for (int i =0; i<size; i++)
    {
      cout <<"\n"<< obj[i].name<< "\t\t"<< obj[i].bowl_avg<<"\t\t"<< obj[i].region;
     
    }
   
        //return pos;
    }
  
    
    
    // Function to display the Players
    // details
    void sortlist(Players obj[], int size)
    {

        cout << "\n\nThe players with batting average greater than 30 and bowling average lower than 25 are:- "<<endl;
        cout <<"\nNAME"<<"\t\t"<<"BATTING AVERAGE"<<"\t\t"<<"BOWLING AVERAGE"<<"\t\t\t"<< "REGION"<<endl;
         for (int i = 0; i <size; i++)
          {
            if (obj[i].bat_avg > 30 && obj[i].bowl_avg<25)
              {
                cout << "\n"<< obj[i].name<< "\t\t\t"<< obj[i].bat_avg<< "\t\t\t\t\t"<< obj[i].bowl_avg<<"\t\t\t\t\t"<< obj[i].region;
              }
          }
       
      }
};
  

// Driver Code
int main()
{
   int n;
   cout << "\nEnter the no. of players you want to enter: ";
   cin >> n;
      Players s[n], s1;
    int pos;
    for (int i = 0; i < n; i++) {
        s[i].readdata();
    }
    
    s1.generatelist(s, n);
    s1.sortlist(s,n);

  
    return 0;
}
