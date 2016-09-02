//Catie Cook 
//Outline for programming assignment 1

#include <iostream> 
using namespace std;
int main ()
{
//Variables for program

	int num, rev, dif, revdif, total;
	rev = 0;
	
//Output messsage to user to enter a 3 digit number.
	cout <<"Enter a 3 digit number whose first digit is larger than its last."<< endl;

//Input digit entered by user
	cin >> num >> endl;

//Reverse the number
//Variable definitions for reversing the number
	rev = rev + 10;
	rev = rev + num%10;
	num = num / 10;

//Calculate difference between original number and reverse
	dif = num - rev;
	cout <<"The reverse of the number you entered is " << rev << endl;

//Find reverse of the difference from first two numbers
	difrev = divref * 10;
	difrev = difrev + rev%10;
	dif = rev / 10; //copying this from my earlier equation that I learned from cplusplus

//Add together the reverse of the original digit and the new reverse from the original two numbers
//to get the final number of the number trick.  
	total = rev + revdif; 

//Output the final number to the user
	cout << total << endl;

return 0 
}
