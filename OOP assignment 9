#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//Base class
class Bank_acc
{
  protected:
  string custname;
  string Address;
  double withdr,balance;
  int saving_accno;
  
  public:
  void open_acc()
  {
    cout << "\n\nEnter name: ";
    cin >> custname;

   

    cout << "Enter current address: ";
    cin >> Address;

    cout << "\nEnter account no.: ";
    cin >> saving_accno;

    cout <<"\nEnter initial deposit: ";
    cin >> balance;
  }

  void withdraw()
  {
    cout << "\nEnter the amount to withdraw: ";
    cin >> withdr;
    balance = balance - withdr;

    cout <<"Remaining Balance: "<< balance <<" Rs.";
  }

  void display()
  {
    cout <<"\n\n******Account Details*******";
    cout <<"\n\nCustomer name: "<<custname;
    cout <<"\nCurrent Address: "<<Address;
    //cout <<"\nAge: "<<age;
    cout <<"\nAccount no.: "<<saving_accno;
    cout <<"\nAccount Balance: "<<balance;
  }

};


class Life_ins : virtual public Bank_acc //To resolve the diamond ambiguity
{
  protected:
  int age,term; 
  double sum,premium;
  long policyno ;
  
  public:
  void read_data()
  {
     cout << "Enter Age: ";
    cin >> age;

    cout <<"\nEnter the assured sum you want: ";
    cin >> sum;

    cout <<"\nEnter the term (in years) for policy: ";
    cin >> term;

    cout << "\nEnter assigned Policy no. : ";
	cin >> policyno;
  }

  void calc_premium()
  {
     if (age<=25)
      {
        premium = 3000*term*(sum/100000);
      }
        
    if (age>=26 && age<=45)
      {
        premium = 4000*term*(sum/100000);
      }
        
    if (age>=46 && age<=60)
      {
        premium = 5000*term*(sum/100000);
      }
        
    if (age>60)
      {
        premium = 0;
        cout << "\n\n***No insurance Available for the given age***";
      }

    cout << "\n\nThe Premium to be paid is: "<<premium;

  }

  void deduct()
  {
    //if (balance >= premium)
    cout << "\nCurrent Balance: "<< balance;
    cout << "\n\nMoney deducted from account: "<< premium<<" Rs.";
    balance = balance - premium;
    cout << "\nAvailable balance: "<< balance;
    

    /* if (balance < premium)
    {
	 cout << "\n\n**Insufficient funds**";
    }*/
  }

  void display_info()
  {
    cout << "\n\n\n****Customer Details****";
    cout <<"\n\nName: "<< custname;
    cout <<"\nAge: "<<age;
    cout <<"\nPolicy no.: "<<policyno;
    cout <<"\nPolicy term: "<<term<<" years";
    //add more details??
  }

};




class Car_ins : virtual public Bank_acc //Toresolve the diamond ambiguity
{
  protected:
  string comp,cond;
  int duration,cage;
  //int sum = 800000;
  long policyno,premium;
  
  public:
  void read_data()
  {
    cout << "\nEnter the brand of the car: ";
    cin >> comp;

	cout << "\nEnter assigned Policy no. : ";
	cin >> policyno;
	
	cout <<"Is your car brand new input (Y/N): ";
    cin >> cond;
    
    if (cond == "Y")
    {

    }
    else
    {
        cout <<"Enter the age of the car: ";
        cin >> cage;
    }

    cout <<"\nEnter the term (in years) for policy: ";
    cin >> duration;
    
    cout <<"\nAssured sum of the policy: 800000 Rs.";
  
   cout << "\nPolicy no. assigned: "<<policyno;

  }

  void calc_premium()
  {
     if (cond == "Y")
      {
        premium = 5000*duration*(800000/100000);
      }
        
    else
	{
	 if (cage>=2 && cage<=4)
      {
        premium = 3000*duration*(800000/100000);
      }
        
    if (cage>=5 && cage<=7)
      {
        premium = 2000*duration*(800000/100000);
      }
        
    if (cage>7)
      {
        premium = 0;
        cout << "\nNo insurance available";
      }
   }

    cout << "\nThe Premium to be paid is: "<<premium;

  }

  void deduct()
  {
   
    if (balance >= premium)
    {
      cout << "\nMoney deducted from account: "<< premium<<" Rs.";
      balance = balance - premium;
      cout << "\nAvailable balance: "<< balance;
    }

    if (balance < premium)
    {
	cout << "\n\n**Insufficient funds**";
    }
  }

   void display_info()
  {
    cout << "\n\n\n****Customer Details****";
    cout <<"\n\nName: "<<custname;
    //cout <<"\nAge: "<<age;
    cout <<"Car brand: "<<comp;
    cout <<"\nCar age: "<<cage;
    cout <<"\nPolicy no.: "<<policyno;
    //add more details??
  }


};


class Claim : public Car_ins, public Life_ins
{
  public:
  int duration;
  long long sa,repair;

  void settlement_life()
  {
    cout <<"\n\n****Life insurance Claim****";
    cout << "\nDuration after which you are claiming the insurance (in years): ";
    cin >> duration;

    if (duration <= 5)
    {
      cout <<"\n\nNo claim amount for this duration";
      sa = 0;
    }

    if (duration>=6 && duration <=12)
    {
      sa = 0.25*sum;
    }

    if(duration >=13 && duration <= 20)
    {
      sa = 0.7*sum; 
    }

    if(duration > 20)
    {
      sa = 2*sum; 
    }

  }

  void settlement_car()
  {
    cout <<"\n\n****Car insurance Claim****"; 
    cout <<"\nEnter car repair costs: ";
    cin >>repair;

  }

  void deposit_life()
  {
    cout <<"\n\nAmount got in insurance claim: "<<sa;
    balance = balance + sa;
    cout << "\nAvailable balance in account: "<< balance;
  }

  void deposit_car()
  {
    cout <<"\n\nAmount got in insurance claim: "<<repair;
    balance = balance + repair;
    cout << "\nAvailable balance in account: "<< balance;
  }

  void display_info_life()
  {
    cout << "\n\nName: "<<custname;
    cout <<"\nCustomer age: "<<age;
    //cout <<"\nPolicy no.: "<<L1.policyno;
    cout <<"\nDuration after which insurance claimed: "<<duration;
    cout <<"\nClaimed amount: "<<sa;
    cout <<"\nAvailable Balance: "<<balance;

  }

  void display_info_car()
  {
    cout << "\n\nName: "<<custname;
    cout <<"\nCustomer age: "<<age;
    //cout <<"\nPolicy no.: "<<C2.policyno;
    cout <<"\nClaimed amount: "<<repair;
    cout <<"\nAvailable Balance: "<<balance;

  }
};



//Driver function
int main() 
{
  Bank_acc B;
  Life_ins L;
  Car_ins C;
  Claim C1;

  int x;
 
  cout << "\n****Enter Account info****";
  B.open_acc();
  B.display();
  cout << "\n\n\n\n\n";
system("PAUSE");
  

  insure:
	system("CLS");
  cout <<"\n\nChoose the insurance you want-";
  cout <<"\n1.Life Insurance\n2.Car Insurance\n3.Exit";
  cout << "\n\nInput: ";
  cin >> x;

  if (x==1)
  {
  	life:
  	system("CLS");
    int y;
    cout <<"\n******Life Insurance******";
    cout <<"\n\n1.Apply for insurance\n2.Insurance Claim\n3.Return main";
    cout << "\n\nInput: ";
    cin >> y;

    if (y==1)
    {
    	system("CLS");
      L.read_data();
      L.calc_premium();
      L.deduct();
      L.display_info();
      cout << "\n\n\n\n\n";
      system("PAUSE");
      goto life;
    }

    if (y==2)
    {
    	system("CLS");
      C1.settlement_life();
      C1.deposit_life();
      C1.display_info_life();
      cout << "\n\n\n\n\n";
      system("PAUSE");
      goto life;
    }
    
    if (y==3)
    {
    	goto insure;
	}
  }

  if (x==2)
  {
  	car:
    int z;
    system("CLS");
    cout <<"\n******Car Insurance******";
    cout <<"\n\n1.Apply for insurance\n2.Insurance Claim\n3.Return main";
    cout << "\n\nInput: ";
    cin >> z;

    if (z==1)
    {
      system("CLS");
      C.read_data();
      C.calc_premium();
      C.deduct();
      C.display_info();
      cout << "\n\n\n\n\n";
      system("PAUSE");
      goto car;
    }

    if (z==2)
    {
      system("CLS");
      C1.settlement_car();
      C1.deposit_car();
      C1.display_info_car();
      cout << "\n\n\n\n\n";
      system("PAUSE");
      goto car;
    }
    
    if (z==3)
    {
    	goto insure;
	}
  }

  if (x==3)
  {
    return(0);
  }
}
