/*
//Jennifer Jimenez COSC 1436-57002
//Repl.it
This program will be used to calculate subtraction, division, addition, multiplication, and modulus.
*/
#include <iostream>
using namespace std;

int main() 
{
 //Variable Declaration and Initialization
 double number1 = 0.0;
 double number2 = 0.0;
 int number3 = 0;
 int number4 = 0;
 double addition = 0.0;
 double subtraction = 0.0;
 double multiplication = 0.0;
 double division = 0.0;
 int modulus = 0;

 //Ask the user for input
 do
 {
   cout << "\nPlease enter your first number: ";
 }
 cin >> number1;
 if(number1 > 0)
 {
   cout << "You've entered a valid number.";
else if(number1 <= 0);
cout << "Invalid number. Please try again.";

   cout << "\nPlease enter your second number: ";
 }
 cin >> number2;
 if(number2 > 0)
 cout << "You've entered a valid number.";
 else if(number2 <= 0)
 cout << "Invalid number. Please try again.";
 {
   cout << "\nPlease enter your third number: ";
 } 
 cin >> number3;
 if(number3 > 0)
 cout << "You've entered a valid number.";
 else if(number3 <= 0)
 cout << "Invalid number. Please try again.";
 {
   cout << "\nPlease enter your fourth number: ";
if(number4 > 0)
   cout << "You've entered a valid number.";
else if(number4 < 0)
cout << "Invalid number. Please try again.";
 }
cin >> number4;
 //Process
 
 addition = number1 + number2;
 subtraction = number1 - number2;
 multiplication = number1 * number2;
 division = number1/number2;
 modulus = number3%number4;


 //Output

cout << "Addition is " << addition << endl;
cout << "Subtraction is " << subtraction << endl;
cout << "Multiplication is " << multiplication << endl;
cout << "Division is " << division << endl;
cout << "Modulus is " << modulus << endl;

return 0;
}