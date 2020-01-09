#include <iostream>
#include <string>

void Greeting(); // forward declaration of function greeting
int add2Numbers(int i1, int i2); // forward declaration of function add2Number


int main()
{
	
	Greeting();

	int number1{ 0 };
	int number2{ 9 };

	std::cout << "What is your first number?";
	std::cin >> number1;

	std::cout << "What is your second number ?";
	std::cin >> number2;


	std::cout << number1 + number2 << std::endl;


	return 0;
}
//<< std::endl - means to go to next line

void Greeting()
{
	std::string myfirstname{""};
	std::string mylastname{ "" };

	std::cout << "What is your first name? ";
	std::cin >> myfirstname;

	std::cout << "What is your last name? ";
	std::cin >> mylastname;

	std::cout << "Hello " << myfirstname << " " << mylastname << std::endl;

	//we dont insert return on void functions
}