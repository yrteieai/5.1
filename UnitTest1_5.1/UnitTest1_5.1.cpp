#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest151
{
	TEST_CLASS(UnitTest151)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(h(2.0, 3.0), (2.0 * 2.0) * sin(3.0) + (3.0 * 3.0) * cos(2.0), 1e-5);
			Assert::AreEqual(h(-2.0, -3.0), ((-2.0) * (-2.0)) * sin(-3.0) + ((-3.0) * (-3.0)) * cos(-2.0), 1e-5);
			Assert::AreEqual(h(0.0, 0.0), 0.0, 1e-5);
			Assert::AreEqual(h(1.5, -2.5), (1.5 * 1.5) * sin(-2.5) + (-2.5 * -2.5) * cos(1.5), 1e-5);
		}
	};
}
