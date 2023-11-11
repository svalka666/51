#include "pch.h"
#include "CppUnitTest.h"
#include "../51/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double p;
			p = h(2, 3);
			Assert::AreEqual(p, -5, 4);
		}
	};
}
