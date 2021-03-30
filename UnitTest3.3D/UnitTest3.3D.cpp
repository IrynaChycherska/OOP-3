#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3D/Pair.h"
#include"../3.3D/Pair.cpp"
#include"../3.3D/Rectangle.h"
#include"../3.3D/Rectangle.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair c;
			Assert::IsTrue(c.dobutok() == c.getA() * c.getB());
		}
	};
}
