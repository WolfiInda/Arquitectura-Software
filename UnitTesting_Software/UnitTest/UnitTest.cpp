#include "pch.h"
#include "CppUnitTest.h"
#include "../UnitTesting_Software/MathW.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		MathW Vec; 
		MathW Vec1 = MathW(6.f, 8.f);
		MathW Vec2 = MathW(3.f, 4.f);
		MathW Vec3 = MathW(10.f, 50.f);
		TEST_METHOD(TestMethod1)
		{
			//Assert::AreEqual(4.f, Vec.Pow(2,2));
			//Assert::AreEqual(5.0, Vec.Sqrt(25));
			//Assert::AreEqual(10.f, Vec.Lenght());
			//Assert::IsTrue(Vec.AreEqual(Vec1, Vec.Max(Vec1, Vec2)));
			//Assert::IsFalse(Vec.AreEqual(Vec2, Vec.Max(Vec1, Vec2)));
			//Assert::IsTrue(Vec.AreEqual(Vec2, Vec.Min(Vec1, Vec2)));
			//Assert::IsFalse(Vec.AreEqual(Vec1, Vec.Min(Vec1, Vec2)));
			//Assert::IsTrue(Vec.AreEqualFloat(1.333f, Vec1.Pendiente()));
			//Assert::AreEqual(5.f, Vec3.Pendiente());
			//Assert::IsTrue(Vec.AreEqualFloat(286.47f, Vec.Red2Deg(5)));
			//Assert::IsTrue(Vec.AreEqualFloat(0.f, Vec.Cross(Vec1, Vec2)));
			//Assert::IsTrue(Vec.AreEqualFloat(50.f, Vec.Point(Vec1, Vec2)));
			//Assert::IsTrue(Vec.AreEqualFloat(10.f, Vec.Magnitude(Vec1)));
		}
	};
}
