#include "pch.h"
#include "CppUnitTest.h"
#include"../3.3E/Object.h"
#include"../3.3E/Object.cpp"
#include"../3.3E/Pair.h"
#include"../3.3E/Pair.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33E
{
	TEST_CLASS(UnitTest33E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair c;
			Assert::IsTrue(c.dobutok() == c.getA() * c.getB());
		}
	};
}
