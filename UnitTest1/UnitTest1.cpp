#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_oop_1.3\Lab_oop_1.3\FuzzyNumber.cpp"
#include "C:\Users\LEGION\source\repos\Lab_oop_1.3\Lab_oop_1.3\FuzzyNumber.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber p;
			FuzzyNumber a;
			a.Setx(9);
			FuzzyNumber a1;
			a1.Setx(5);
			a1.Setl(10);
			a1.Setr(24);
			FuzzyNumber a2;
			a2.Setx(3);
			a2.Setl(14);
			a2.Setr(17);
			p = Add(a1, a2);

			Assert::AreEqual(p,a);

		}
	};
}