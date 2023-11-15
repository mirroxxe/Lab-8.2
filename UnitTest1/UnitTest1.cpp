#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../Lab №8.2/Lab №8.2.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestCountAsInLastWord)
		{
			
			std::string testString = "I eat apples";
			size_t expectedCount = 1; 

			
			size_t actualCount = CountLastWord(testString);

			
			Assert::AreEqual(expectedCount, actualCount);
		}
	};
}
