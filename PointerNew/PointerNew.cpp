// PointerNew.cpp : Defines the entry point for the console application.
//

#include <iostream>


int main()
{
	int* pTo_age = new int;

	std::cout << "Enter dogs age: ";
	std::cin >> *pTo_age;

	std::cout << "Dogs age is " << *pTo_age << " and is stored at 0x" << pTo_age << std::endl;
	std::cout << "Dogs age is " << *pTo_age << " and is stored at 0x" << std::hex << pTo_age << std::endl; 
	std::cout << "Dogs age is " << *pTo_age << " and is stored at 0x" << pTo_age << std::endl;


	delete pTo_age;

	return 0;
}

