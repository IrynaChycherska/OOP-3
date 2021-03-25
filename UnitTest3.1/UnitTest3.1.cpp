#include "pch.h"
#include "CppUnitTest.h"
#include"../3.1/Pair.h"
#include"../3.1/Pair.cpp"
#include"../3.1/Rectangle.h"
#include"../3.1/Rectangle.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest31
{
	TEST_CLASS(UnitTest31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangle c;
			Assert::IsTrue(c.dobutok() == c.getA() * c.getB());
		}
	};
}
