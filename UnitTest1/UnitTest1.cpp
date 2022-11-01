#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			double R;
			t = (cos(0) + 1) / (exp(0) + sin(0) * sin(0));
			R = -(1 / 4 * 0 + 2);
			Assert::AreEqual(t, 2);
			Assert::AreEqual(R, -0,5);
		}
	};
}
