#include "PointersManipulation.h"

void Increment1(int p){
	p++;
}

void Increment2(int* n){
	(*n)++;
}

void Increment3(int& n){
	n++;
}