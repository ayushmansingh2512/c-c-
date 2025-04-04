#include <iostream>

int addNumber(int first_number, int second_number){
	int sum = first_number + second_number;
	return sum;
}

int main(int argc, char **argv)
{
	int firstNumber = 12;
	int secondNumber = 9;

	int sum = firstNumber + secondNumber;
	sum = addNumber(34,32);
	std:: cout<<"the sum of the two number "<< sum << std::endl;
	std:: cout<<"the sum of the two number: "<< addNumber(23,54) << std::endl;

	return 0;
}
