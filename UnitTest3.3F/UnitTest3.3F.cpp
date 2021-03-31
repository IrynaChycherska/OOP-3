#include "pch.h"
#include "CppUnitTest.h"
#include"../3.3F/Point.h"
#include"../3.3F/Point.cpp"
#include"../3.3F/Triangle.h"
#include"../3.3F/Triangle.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest33F
{
	TEST_CLASS(UnitTest33F)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Point c;
			Assert::IsTrue(c.Vidstan() == sqrt(c.GetX() * c.GetX() + c.GetY() * c.GetY()));
		}
	};
}
