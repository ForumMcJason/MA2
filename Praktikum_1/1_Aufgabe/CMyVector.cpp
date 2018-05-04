#include <iostream>
#include <iomanip>
#include <math.h>
#include "CMyVector.h"


double CMyVector::length()
{
	double value = 0;
	for (int i = 0; i < _dimension; i++)
		value += (values[i] * values[i]);

	//Wurzel selber berechnen ?
	return sqrt(value);
}

//CMyVector::CMyVector(const CMyVector &v)
//{
//	_dimension = v._dimension;
//	double *values = new double[v._dimension];
//	for (int i = 0; i < _dimension; i++)
//		values[i] = v[i];
//
//}

CMyVector CMyVector::operator+(CMyVector vector)
{	
	if (this->_dimension == vector.getDimension())
	{
		CMyVector addV = CMyVector(_dimension);
		for (int i = 0; i < this->_dimension; i++)
		{
			addV[i] = this->values[i] + vector[i];
		}
		return addV;
	}

	return *this;
}

CMyVector CMyVector::operator*(double lambda)
{
	CMyVector mulV = CMyVector(_dimension);
	for (int i = 0; i < this->_dimension; i++)
	{
		mulV[i] = this->values[i] * lambda;
	}
	return mulV;
}

//void CMyVector::print()
//{
//	std::cout << " /" << std::setw(3) << "" << "\\ "<<std::endl;
//	for(int i = 0; i < this->_dimension; i++)
//	std::cout << "|" << std::setw(3) << this->values[i] << "  |" << std::endl;
//	std::cout << " \\" << std::setw(3) << "" << "/ " << std::endl;
//}
void CMyVector::print()
{
	std::cout << "( ";
	for (int i = 0; i < _dimension; i++)
	{
		std::cout << values[i] << " ";
	}
	std::cout << ") ";
}

CMyVector gradient(CMyVector x, double(*function)(CMyVector x))
{
	double h = 1e-8;
	CMyVector g = CMyVector(x.getDimension());
	for (int i = 0; i < x.getDimension(); i++)
	{
		x[i] = x[i] + h;
		double tmpd = function(x);
		x[i] -= h;
		tmpd -= function(x);
		g[i] = tmpd / h;
	}
	g.print();
	return g;
}