#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(double real,double im)
{
	_real = real;
	_im=im;
	cout << "constructeur appel�" << "\n";
};


Complex::Complex(Complex&)
{
	cout <<  "constructeur copie appel�" << "\n";
}


Complex::~Complex(void)
{
	cout << "Destructeur appel�" << "\n";
}

double Complex::getReal(void)
{
	return _real;
};

double Complex::getIm(void)
{
	return _im;
};


void Complex::setReal(double real)
{
	_real =real;
}

void Complex::setIm(double im)
{
	_im = im;
}

double Complex::getModulus(void)
{
	return ( (_im)*(_im) + (_real)*(_real) );
}