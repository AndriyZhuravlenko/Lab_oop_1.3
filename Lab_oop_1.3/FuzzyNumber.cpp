#include "FuzzyNumber.h"
#include <iostream>
#include <string> 
#include <sstream>
using namespace std;

void FuzzyNumber::Setx(long value)
{
	x = value;
}

void FuzzyNumber::Setl(long value)
{
	l = value;
}

void FuzzyNumber::Setr(long value)
{
	r = value;
}

void FuzzyNumber::Init(long m, long o, long n)
{
	x = m;
	l = o;
	r = n;
}

void FuzzyNumber::Read()
{
	long m;
	long o;
	long n;
	cout << "x = "; cin >> m;
	cout << "l = "; cin >> o;
	cout << "r = "; cin >> n;
	Init(m, o, n);
}

void FuzzyNumber::Display()const
{
	cout << endl;
	cout << "result: (" << l << "," << x << "," << r << ")" << endl;
}

FuzzyNumber Add(FuzzyNumber A, FuzzyNumber B)
{
	FuzzyNumber t;

	t.l = A.x + B.x - A.l - B.l;

	t.x = A.x + B.x;

	t.r = A.x + B.x + A.r + B.r;

	return t;
}

FuzzyNumber Mul(FuzzyNumber A, FuzzyNumber B)
{
	FuzzyNumber t;

	t.l = A.x * B.x + B.x * A.l + A.x * B.l + A.l * B.l;

	t.x = A.x * B.x;

	t.r = A.x * B.x + B.x * A.r + A.x * B.r + A.r * B.r;
	
	return t;
}
