#include <iostream>
#include <string>

int main()
{
	std::string nama;
	std::string npm;
	std::cout<<"Masukan Nama : "; std::getline(std::cin, nama);
	std::cout<<"NPM \t\t: "; std::getline(std::cin, npm);
	std::cout<<nama<<std::endl;
	std::cout<<npm;

	return 0;
}