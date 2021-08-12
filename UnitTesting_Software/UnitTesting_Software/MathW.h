#pragma once
#ifdef UNITTESTINGSOFTWARE_EXPORTS
#define MATH_I _declspec(dllexport)
#else
#define MATH_I _declspec(dllexport)
#endif

class MATH_I MathW 
{
public:
	MathW() = default;
	~MathW() = default;
	MathW(float x, float y);
	float Lenght();
	float Pow(float x, int pow);
	double Sqrt(double raiz);
	MathW Max(MathW Vec1, MathW Vec2);
	MathW Min(MathW Vec1, MathW Vec2);
	float Pendiente();
	float Red2Deg(float x);
	float Cross(MathW Vec1, MathW Vec2);
	float Point(MathW Vec1, MathW Vec2);
	float Magnitude(MathW Vec1);
	bool AreEqualFloat(float x, float y);
	bool AreEqual(MathW Vec1, MathW Vec2);

	float x;
	float y;

};

bool operator==(MathW Vec1, MathW Vec2);