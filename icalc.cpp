// Nils Skaane
// Imaginary Number Calculator 10/24/16

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// prototypes go here
void input(double & a, double & b); //prototype for i(input)
void output (double a, double b); //prototype for output
void addition(double & a, double & b, double c, double d); //prototype for addition
void subtraction(double & a, double & b, double c, double d); //prototype for subtraction
void multiplication(double & a, double & b, double c, double d); //prototype for multiplication
void division(double & a, double & b, double c, double d); //prototype for division
int length(double & a, double & b); //prototype for length


int main(void)
{
	char choice;
	double A = 0; // variable A output
	double B = 0; // variable B output
	double C = 0; // variable C input
	double D = 0; // variable D input


	// output options menu for switch
	cout << "Welcome to the Complex Number Calculator!" << endl;
	cout << "Here are your options: " << endl;
	cout << "+ (addition)" << endl;
	cout << "- (subtraction)" << endl;
	cout << "* (multiplication)" << endl;
	cout << "/ (division)" << endl;
	cout << "l (length)" << endl;
	cout << "i (new input)" << endl;
	cout << "q (quit)" << endl;

	while(choice != 'q') // if choice = 'q' it will exit out, rest it chooses from user cin
	{
		cout << "Enter what you want to do: ";
		cin >> choice;

		switch(choice)
		{
			case 'i': //input switch
				input(A,B);
				output(A,B);
				break;
			case '+': //switch for addition
				input(C,D);
				addition(A,B,C,D);
				output(A,B);
				break;
			case '-': //switch for subtraction
				input(C,D);
				subtraction(A,B,C,D);
				output(A,B);
				break;
			case '*': //switch for multiplication
				input(C,D);
				multiplication(A,B,C,D);
				output(A,B);
				break;
			case '/': //switch for division
				input(C,D);
				division(A,B,C,D);
				output(A,B);
				break;
			case 'l': //switch for length
				length(A,B);
				cout << "The length is " << A << endl;
				break;
			case 'q': //switch to cancel out of imaginary calculator
				cout << "Thanks for using our calculator!" << endl;
				break;
			default: //if there is no valid switch per user request
				cout << "Not a valid choice!" << endl;
				break;
		}
	}

	return 0;
}

// function definitions
void input(double & a, double & b) //input function definitions
{
	cout << "Enter the real part: ";
	cin >> a;
	cout << "Enter the imaginary part: ";
	cin >> b;
}

void output(double a, double b) //input function output
{
	cout << fixed << setprecision(2) << "Current value: " << a << " + " << b << "i" << endl;
}
void addition(double & a, double & b, double c, double d) //input function addition
{
	a = a + c;
	b = b + d;
}
void subtraction(double & a, double & b, double c, double d) //input function subtraction
{
	a = a - c;
	b = b - d;
}
void multiplication(double & a, double & b, double c, double d) //input function multiplication
{
	int aa;
	aa = a; //creating variable to make sure variable a is not changed
	a = (a*c) - (b*d);
	b = (b*c) + (aa*d);
}
void division(double & a, double & b, double c, double d) //input function division
{
	int aa;
	aa = a; //creating variable to make sure variable a is not changed
	a = (((a * c)+(b * d))/((c * c)+(d * d)));
	b = (((b * c)-(aa * d))/((c * c)+(d * d)));
}
int length(double & a, double & b) //input function length
{
	a = sqrt((a * a) + (b * b));
	return 0;
}
