#include <iostream>
#include "CMyVector.h"

double func(CMyVector v) 
{
	double x = v[0] * v[0];
	double y = v[1] * v[1];
	return ( x + y );
}

int main()
{/*

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

	std::cout << std::endl;*/

	CMyVector function_values = CMyVector(2);
	function_values[0] = 2.0;
	function_values[1] = 3.0;

	CMyVector p = CMyVector(2);
	p[0] = 1.0;
	p[1] = 2.0;
	CMyVector v4 = function_values.gradient(p, *func);
	system("PAUSE");
	return 0;
}