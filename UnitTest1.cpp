#include "pch.h"
#include "CppUnitTest.h"
#include "D:\c++\TechnicalTask2\TechnicalTask2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		
		TEST_METHOD(testStartZero)
		{
			
			vector<vector<int> > matrix({
				{ 0, 0, 0, 0, 0, 1 },
				{ 1, 1, 1, 1, 0, 1 },
				{ 1, 0, 0, 1, 0, 1 },
				{ 1, 1, 1, 1, 1, 1 },
				{ 1, 0, 0, 0, 0, 1 },
				{ 1, 0, 0, 0, 0, 1 }});
						
			Assert::IsTrue(func(matrix)==0);
		}

		TEST_METHOD(testFinishZero)
		{
			vector<vector<int> > matrix({
				{ 1, 0, 0, 0, 0, 1 },
				{ 1, 1, 1, 1, 0, 1 },
				{ 1, 0, 0, 1, 0, 1 },
				{ 1, 1, 1, 1, 1, 1 },
				{ 1, 0, 0, 0, 0, 1 },
				{ 1, 0, 0, 0, 0, 0 }});

			Assert::IsTrue(func(matrix) == 0);
		}

		TEST_METHOD(testTenXTen)
		{
			vector<vector<int> > matrix({
				{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1 },
				{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
				{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
				{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
				{ 1, 1, 1, 1, 0, 1, 0, 0, 0, 1 },
				{ 1, 0, 0, 1, 0, 1, 0, 0, 0, 1 },
				{ 1, 0, 0, 1, 1, 1, 0, 0, 0, 1 },
				{ 1, 0, 0, 1, 1, 1, 0, 0, 0, 1 },
				{ 1, 1, 1, 0, 0, 1, 0, 0, 0, 0 },
				{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1 }});

			Assert::IsTrue(func(matrix) == 1);
		}

		TEST_METHOD(testTenXTen2)
		{
			vector<vector<int> > matrix({
				{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 1 },
				{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
				{ 0, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
				{ 0, 0, 0, 0, 0, 1, 0, 5, 0, 1 },
				{ 1, 1, 1, 1, 0, 1, 0, 0, 0, 1 },
				{ 1, 0, 0, 1, 0, 1, 0, 0, 0, 1 },
				{ 1, 0, 0, 1, 1, 1, 0, 0, 0, 1 },
				{ 1, 0, 0, 1, 1, 1, 0, 0, 0, 1 },
				{ 1, 1, 1, 0, 0, 1, 0, 0, 0, 0 },
				{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1 } });

			Assert::IsTrue(func(matrix) == 0);
		}
	};
}
