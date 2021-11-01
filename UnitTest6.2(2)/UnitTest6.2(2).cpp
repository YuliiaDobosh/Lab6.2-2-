#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab6.2(2)\Lab6.2(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest622
{
	TEST_CLASS(UnitTest622)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { 0,3,6,9 };
			int tmp = Max(A, 4, 0,9);
			Assert::AreEqual(9, tmp);

		}
	};
}
