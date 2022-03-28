#include <iostream>
#include "FuzzyNumber.h"
using namespace std;
int main()
{
	FuzzyNumber a, b, c, d;

	a.Read();
	b.Read();

	c = Add(a, b);
	c.Display();

	d = Mul(a, b);
	d.Display();

	return 0;
}