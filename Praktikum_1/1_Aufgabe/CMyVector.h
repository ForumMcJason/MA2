#pragma once

class CMyVector
{
private:
	int _dimension = 0;
	double* values;
public:
	CMyVector() {}
	CMyVector(int dimension) 
	{
		_dimension = dimension;
		values = new double[_dimension];
	}
	int getDimension() { return _dimension; }
	double length();
	void print();

	//durch den Referenz operator (&) kann der rückgegebene Wert verändert werden. 
	double operator [] (int index) const { return values[index]; }
	double& operator [] (int index) { return values[index]; }
	CMyVector operator+ (CMyVector vector);
	CMyVector operator* (double lambda);
};