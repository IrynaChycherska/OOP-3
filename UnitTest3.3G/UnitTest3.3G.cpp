#include "pch.h"
#include "CppUnitTest.h"
#include"../3.3G/Object.h"
#include"../3.3G/Object.cpp"
#include"../3.3G/Point.h"
#include"../3.3G/Point.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33G
{
	TEST_CLASS(UnitTest33G)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Point c;
			Assert::IsTrue(c.Vidstan() == sqrt(c.GetX() * c.GetX() + c.GetY() * c.GetY()));
		}
	};
}
