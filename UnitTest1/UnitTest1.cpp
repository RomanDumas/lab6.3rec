#include "pch.h"
#include "CppUnitTest.h"
#include "../LR6.3rec/LR6.3rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 20, sum = 0, ssum = 0, i = 0;

			auto* b = new int[k];
			createArr(b, k, i);
			PositiveSum(b, k, sum, i);

			int* expected = new int[20];
			createArr(expected, 20, 0);
			PositiveSum(expected, 20, ssum, 0);

			Assert::AreEqual(sum, ssum, 0.00001);
		}
	};
}
