// Catie Cook 
// Fundimentals of Computing  
// Magic numbers assignment
 
#include <iostream> 
#include <string>

using namespace std; 
int option;

int main ()  
{
// Welcome page
  
   
	// Constants for menu choices 

	char option;
	
		string name;
		string school;

		cout << "Please enter your name: "<< endl;
		getline(cin, name);
		cout << "What class are you using this program for?" << endl;
		getline(cin, school);
		cout << "Hey " << name<<", welcome to your Magic Number program. I hope it helps with your " << school << " class" << endl;

 		
	while (option != 'c' || option != 'c')  // Menu section loops until c or C is input
	{
     			// Display Menu giving user three options
				
				char option; 

					cout <<"\nPlease select an operation: \n\n"
	    				 <<"a. Display an example. \n\n"
	    				 <<"b. Try it out yourself! \n\n"
	    				 <<"c. Exit" << endl
		 				 << "\n++++++++++++++++++++++++++++++++++++\n\n";
					cin >> option;
	 

 	// Start of switch case. Cycle through A, B and C menue items. Terminating at C.
 				{
					switch (option)    
     				{	
						case 'a':
						case 'A':
						
							cout <<"\n\nHere is an example of the Magic Numbers Problem: \n\n"
		     					 <<"Suppose you entered this as your frist number: 561 \n"
		     					 <<"\nIts reverse is: 165 \n\n"
		     					 <<"Now we take the difference between the first two numbers: 561 - 165 = 396 \n\n"
		     					 <<"Next, we will reverse this numer to get: 693 \n\n"
		    					 <<"Now, add this reverse, and the difference together: 693 + 396 = 1,089 \n\n"
		   				    	 <<"This will always be the outcome with any 3 digit number \nwhose first number is larger than its last! \n\n"
			 					 << "+++++++++++++++++++++++++++++++++++\n\n";
     					break;
	
	 	
	// Here the case try it yourself section begins. Case b and B make it applicable for both upper and lower case
						case 'b':
						case 'B':
 
	
						int num, digit1, digit2, digit3, rev, difference;
	// collect the original num integer from user
							
							cout << "Enter a 3 digit number whos first integer is larger than its last.\n\n";
							cin >> num;
	
	// The integer places are separated with manipulation of the original number
							digit1 = (num % 10);
	
	// takes the remainder of num divided by 10 using modulus
							digit2 = (num / 10) % 10; 
	
	// takes the whole number created when num is divided by 10
	// then takes the remainder of this number divide by 10 with modulus
	
							digit3 = (num / 100) % 10;
	
	// same as before, but how targets the 100s integer
							rev = (digit1 * 100) + (digit2 * 10) + digit3;

	// takes all of the separated integers and rearranges them by multiplication and addition 
							difference = (num - rev);

	// The displayed results

							cout << "\nThe number you have enetered is: " << num << endl << endl;
							cout <<"The reverse of your number is: " << rev;
							cout << "\n\nThe difference of " << num << " and " << rev << " is: " << difference << endl;
 
	// reverse the difference, name this revdif, and add that back into the difference 
   
						int revdif, digit4, digit5, digit6, total;	 
						digit4 = (difference % 10);
						digit5 = (difference / 10) % 10;
						digit6 = (difference / 100) % 10;
						revdif = (digit4 * 100) + (digit5 * 10) + digit6;
						total = (difference + revdif);				// compute the final number 

							cout << "\nThe reverse of the difference is: " << revdif << endl << endl;
							cout << "Added back to the number before it was reversed, the final number is "<< total << endl << endl
								 << "++++++++++++++++++++++++++++++++++++\n\n";
						break; 
	
						case 'c':
						case 'C':

						cout << "\nThanks for playing the Magic Number Game\n\n"; 

						exit (0); // command to exit the program 

						break;
	
					}
	 //if the User puts the wrong type of input, this will promt the user to enter a valid option

	  while(option != 'a' && option != 'A' && option != 'b' && option != 'B' && option  != 'c' && option != 'C')
		{
			cout << "\nPlease enter a valid selection" << endl; 
			cin >> option; 
		}
		
	 }
	 }
	
	
	
	return 0; 
}
