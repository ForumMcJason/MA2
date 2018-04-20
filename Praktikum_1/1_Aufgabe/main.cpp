#include <iostream>
#include "CMyVector.h"

int main()
{
	CMyVector v = CMyVector(3);
	CMyVector v2 = CMyVector(3);
	v[0] = 4;	
	v[1] = 1; 
	v[2] = 5;
	
	v2[0] = 2; 
	v2[1] = 1; 
	v2[2] = 6;

	
	CMyVector v3 = v + v2;
	v.print();
	std::cout << "+ ";
	v2.print();
	std::cout << "= ";
	v3.print();
	std::cout << "L: " << v3.length() << std::endl;

	v3 = v2 * 20;
	v2.print();
	std::cout << "* 20 = ";
	v3.print();
	std::cout << "L: " << v3.length() << std::endl;

	v3 = v * 2;
	v.print();
	std::cout << "* 2 = ";
	v3.print();
	std::cout << "L: " << v3.length() << std::endl;

	std::cout << std::endl;
	system("PAUSE");
	return 0;
}