#pragma once
class Complex
{
public:
	Complex(double,double);
	Complex(Complex&);
	~Complex(void);
	double getReal(void);
	double getIm(void);
	void setReal(double);
	void setIm(double);

private:
	double _real;
	double _im;
};

