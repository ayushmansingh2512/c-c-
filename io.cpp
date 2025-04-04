#include <iostream>
#include <string>
int main()
{
	/*
	std::cout<< "hello c++20" << std::endl;
	int age{23};
	std::cout << "Age : " << age << std::endl;
	std::cerr << "Standard error (unbuffered) : Immediate error messages "<<std::endl;
	std::clog << "Standard error (buffered) : Logging info/debugging (less urgent)"<< std::endl;
	*/
	/*
	int age1;
	std::string name;
	std::cout << "please type you name and age : " << std::endl;
//	std::cin >> name;
//	std::cin >> age1;
	std::cin >> name >> age21;
 	int twenty = age1 + 18;
std::cout << "Hello " << name << " you are " << age1 << " year old and in 2045 you will be " << twenty << std::endl; 
*/	
	std::string full_name;
	int age3;
	
	std::cout << "Please type your naem  full name and age" << std::endl;
	std:: getline(std::cin,full_name);
	std::cin >> age3;
	std::cout << "Hello " << full_name << " you are " << age3 << " year old " << std::endl;	
	return 0;
}
