#include "pch.h"
#include "CppUnitTest.h"
#include "../lab52/lab52.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int z;
			z = A(1., 2., 3.);
			Assert::AreEqual(z, 1);

		}
	};
}
