#include "pch.h"
#include "MathW.h"

MathW::MathW(float x, float y)
{
	this->x = x;
	this->y = y;
}

float MathW::Lenght()
{
	float Suma = Pow(x, 2) + Pow(y, 2);
	Suma = Sqrt(Suma);
	return Suma;
}

float MathW::Pow(float x, int pow)
{
	float Resultado = 1;

	for (int i = 0; i < pow; i++)
	{
		Resultado*=x;
	}
	return Resultado;
}

double MathW::Sqrt(double raiz)
{
	double Actual = raiz / 2;
	for (int i = 0; i < 20; i++)
	{
		double Otra = raiz / Actual;
		Actual = (Actual + Otra)/2;

	}
	return Actual;
}

MathW MathW::Max(MathW Vec1, MathW Vec2)
{
	if (Vec1.Lenght() < Vec2.Lenght())
	{
		return Vec2;
	}
	else
	{
		return Vec1;
	}
}

MathW MathW::Min(MathW Vec1, MathW Vec2)
{
	if (Vec1.Lenght() > Vec2.Lenght())
	{
		return Vec2;
	}
	else
	{
		return Vec1;
	}
}

float MathW::Pendiente()
{
	return y / x;
}

float MathW::Red2Deg(float x)
{
	return (x / (2 * 3.14159265)) * 360;
}

float MathW::Cross(MathW Vec1, MathW Vec2)
{
	return Vec1.x * Vec2.y - Vec1.y * Vec2.x;
}

float MathW::Point(MathW Vec1, MathW Vec2)
{
	return Vec1.x * Vec2.x + Vec1.y * Vec2.y;
}

float MathW::Magnitude(MathW Vec1)
{
	float Val = Pow(Vec1.x, 2) + Pow(Vec1.y, 2);
	return Sqrt(Val);
}

bool MathW::AreEqualFloat(float x, float y)
{
	return x < y + .01f && x > y -.01f;
}

bool MathW::AreEqual(MathW Vec1, MathW Vec2)
{
	return Vec1 == Vec2;
}

bool operator==(MathW Vec1, MathW Vec2)
{
	return Vec1.x == Vec2.x && Vec1.y == Vec2.y;
}
