#include "pch.h"
#include "CppUnitTest.h"
#include"../3.3А/Point.h"
#include"../3.3А/Point.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33A
{
	TEST_CLASS(UnitTest33A)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Point c;
			Assert::IsTrue(c.Vidstan() == sqrt(c.GetX() * c.GetX() + c.GetY() * c.GetY()));
		}
	};
}
