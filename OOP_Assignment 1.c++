#include <iostream>
#include<string.h>


using namespace std;

struct library {
	char b_name[300];
	char a_name[300];
  int copies;
	int price;
  };


int main()
{
	
	struct library lib[500];

	char an[300], bn[300], temp[300];

//input for the switch case
/* count to keep the counter for the no. of books inputted in the library*/
	int i,input, count,j,k,l;

	i = input = count = 0;

		cout << "\n\n1. Add book information\n2. Display book information\n3. Search the book by its name\n4. List all books of given author\n5. List the books in alphabetical order\n6. Exit";

    cout << "\n\nNOTE : Please use underscore(_) instead of space while inputting names";


	while (input != 6) {
			
      // Enter the book details
	cout << "\n\nInput the option: ";
	cin >> input;

		
		switch (input) 
    {
      case 1:

			cout << "Enter the book's name = ";
			cin >> lib[count].b_name;

			cout << "Enter the author's name = ";
			cin >> lib[count].a_name;

		 cout << "Enter no. of copies available = ";
		 cin >> lib[count].copies;

			cout << "Enter price = ";
		  cin >> lib[count].price;

			count++;  //counter to keep the track on the no. of inputs

			break;

		// Printing the  book information
		case 2:
		
			for (i = 0; i < count; i++) 
      {

				cout << "\n\nBook's name = " << lib[i].b_name;

				cout << "\nAuthor's name = " << lib[i].a_name;

				cout << "\nCopies = " << lib[i].copies;

				cout << "\tPrice = " << lib[i].price;
			}
			break;
      
      //Searching the book by its name 
      case 3:
			cout << "Enter the book's name : ";
         	cin >>  bn;

			for (i = 0; i < count; i++) 
      {
         if (strcmp (bn, lib[i].b_name)	== 0)   //comparing both the strings to find the book

				cout << "\nCopies available: " << lib[i].copies;

        
			}
			break;


		// Searching the books written by a single author
		  case 4:
			cout << "Enter author's name : ";
			cin >>  an;
			for (i = 0; i < count; i++) 
      {
         if (strcmp (an, lib[i].a_name)	== 0)

		cout << lib[i].b_name << "\nCopies available: " << lib[i].copies;
			}
			break;


		// Sorting the books in alphabetical order
		case 5:
 

    for(i = 0; i < count; ++i)
    {
      for(j=0 ; j< (count-1) ; ++j)
      {
        if(strcmp(lib[j].b_name,lib[j+1].b_name)>0)
        {
          strcpy(temp, lib[j].b_name);       //using strcpy to copy string in another variable
          strcpy(lib[j].b_name, lib[j+1].b_name);
          strcpy(lib[j+1].b_name, temp);

        }
      }
    }

   cout << "\nThe sorted order of the book names are: ";
   for(i=0; i<count; i++)
   {
      cout << "\n" << lib[i].b_name;
   }
   break;
	
		
    
    case 6:
		exit(0);

		}
    
	}
	return 0;
}
