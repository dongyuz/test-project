#include "pch.h"
#include "CppUnitTest.h"
#include "../cproject/Hello.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
   public:

      TEST_METHOD(IsPowerOfTwo)
      {
         Assert::IsTrue(is_power_of_two(8));
      }

      TEST_METHOD(MultiplyByTwo)
      {
         Assert::AreEqual(14, multiply_by_two(7));
      }

      TEST_METHOD(DivideByTwo)
      {
         Assert::AreEqual(-4, divide_by_two(-7));
      }
   };
}
