#pragma once
#include <string> 
#include <sstream>
class FuzzyNumber
{
private:
	long x;
	long l;
	long r;
public:
	long Getx() const { return x; }
	long Getl() const { return l; }
	long Getr() const { return r; }
	void Setx(long value);
	void Setl(long value);
	void Setr(long value);

	friend FuzzyNumber Add(FuzzyNumber A, FuzzyNumber B);
	friend FuzzyNumber Mul(FuzzyNumber A, FuzzyNumber B);

	void Init(long, long, long);
	void Read();
	void Display()const;
};