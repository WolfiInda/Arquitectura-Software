#include "pch.h"
#include "../UnitTesting_Software/MathW.h"

TEST(TestCaseName, TestName) {

	MathW Vec;
	MathW Vec1 = MathW(6.f, 8.f);
	MathW Vec2 = MathW(3.f, 4.f);
	MathW Vec3 = MathW(10.f, 50.f);

  EXPECT_EQ(4.f, Vec.Pow(2,2));
  EXPECT_EQ(5.f, Vec.Sqrt(25));
  EXPECT_EQ(10.f, Vec.Lenght());
  EXPECT_TRUE(Vec.AreEqual(Vec1, Vec.Max(Vec1, Vec2)));
  EXPECT_FALSE(Vec.AreEqual(Vec2, Vec.Max(Vec1, Vec2)));
  EXPECT_TRUE(Vec.AreEqual(Vec2, Vec.Min(Vec1, Vec2)));
  EXPECT_FALSE(Vec.AreEqual(Vec1, Vec.Min(Vec1, Vec2)));
  EXPECT_TRUE(Vec.AreEqualFloat(1.333f, Vec1.Pendiente()));
  EXPECT_EQ(5.f, Vec3.Pendiente());
  EXPECT_TRUE(Vec.AreEqualFloat(286.47f, Vec.Red2Deg(5)));
  EXPECT_TRUE(Vec.AreEqualFloat(0.f, Vec.Cross(Vec1, Vec2)));
  EXPECT_TRUE(Vec.AreEqualFloat(50.f, Vec.Point(Vec1, Vec2)));
  EXPECT_TRUE(Vec.AreEqualFloat(10.f, Vec.Magnitude(Vec1)));
}