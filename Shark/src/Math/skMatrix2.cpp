#include <Math/skMatrix2.hpp>

namespace shark
{
	skMatrix2::skMatrix2(float m00, float m01, float m10, float m11) :
	m00(m00),
	m01(m01),
	m10(m10),
	m11(m11)
	{
	}

	skMatrix2::skMatrix2() :
	m00(0.f),
	m01(0.f),
	m10(0.f),
	m11(0.f)
	{
	}

	skMatrix2 skMatrix2::transpose() const
	{
		return skMatrix2(m00, m10, m01, m11);
	}

	skMatrix2 skMatrix2::inverse() const
	{
		return skMatrix2(skMatrix2(m11, -m01, -m10, m00) * 1.f / this->determinant());
	}

	float skMatrix2::determinant() const
	{
		return m00 * m11 - m01 * m10;
	}

	skMatrix2& skMatrix2::operator= (const skMatrix2& rhs)
	{
		m00 = rhs.m00;
		m01 = rhs.m01;
		m10 = rhs.m10;
		m11 = rhs.m11;

		return *this;
	}

	skMatrix2& skMatrix2::operator- ()
	{
		m00 = -m00;
		m01 = -m01;
		m10 = -m10;
		m11 = -m11;

		return *this;
	}

	bool skMatrix2::operator== (const skMatrix2& rhs) const
	{
		return (m00 == rhs.m00) && (m01 == rhs.m01) && (m10 == rhs.m10) && (m11 == rhs.m11);
	}

	bool skMatrix2::operator!= (const skMatrix2& rhs) const
	{
		return (m00 != rhs.m00) || (m01 != rhs.m01) || (m10 != rhs.m10) || (m11 != rhs.m11);
	}

	const skMatrix2 skMatrix2::operator+ (const skMatrix2& rhs) const
	{
		return skMatrix2(m00 + rhs.m00, m01 + rhs.m01, m10 + rhs.m10, m11 + rhs.m11);
	}

	const skMatrix2 skMatrix2::operator- (const skMatrix2& rhs) const
	{
		return skMatrix2(m00 - rhs.m00, m01 - rhs.m01, m10 - rhs.m10, m11 - rhs.m11);
	}

	const skMatrix2 skMatrix2::operator* (const skMatrix2& rhs) const
	{
		return skMatrix2(m00 * rhs.m00 + m01 * rhs.m10, 
						 m00 * rhs.m01 + m01 * rhs.m11, 
						 m10 * rhs.m00 + m11 * rhs.m10, 
						 m10 * rhs.m01 + m11 * rhs.m11);
	}

	skMatrix2& skMatrix2::operator+= (const skMatrix2& rhs)
	{	
		m00 += rhs.m00;
		m01 += rhs.m01;
		m10 += rhs.m10;
		m11 += rhs.m11;

		return *this;
	}

	skMatrix2& skMatrix2::operator-= (const skMatrix2& rhs)
	{
		m00 -= rhs.m00;
		m01 -= rhs.m01;
		m10 -= rhs.m10;
		m11 -= rhs.m11;

		return *this;
	}

	skMatrix2& skMatrix2::operator*= (const skMatrix2& rhs)
	{
		m00 *= rhs.m00 + m01 * rhs.m10;
		m00 *= rhs.m01 + m01 * rhs.m11;
		m10 *= rhs.m00 + m11 * rhs.m10;
		m10 *= rhs.m01 + m11 * rhs.m11;

		return *this;
	}

	const skMatrix2 skMatrix2::operator+ (float rhs) const
	{
		return skMatrix2(m00 + rhs, m01 + rhs, m10 + rhs, m11 + rhs);	
	}

	const skMatrix2 skMatrix2::operator- (float rhs) const
	{
		return skMatrix2(m00 - rhs, m01 - rhs, m10 - rhs, m11 - rhs);
	}

	const skMatrix2 skMatrix2::operator* (float rhs) const
	{
		return skMatrix2(m00 * rhs, m01 * rhs, m10 * rhs, m11 * rhs);
	}

	const skMatrix2 skMatrix2::operator/(float rhs) const
	{
		return skMatrix2(m00 / rhs, m01 / rhs, m10 / rhs, m11 / rhs);
	}

	skMatrix2& skMatrix2::operator+= (float rhs)
	{
		m00 += rhs;
		m01 += rhs;
		m10 += rhs;
		m11 += rhs;

		return *this;
	}

	skMatrix2& skMatrix2::operator-= (float rhs)
	{
		m00 -= rhs;
		m01 -= rhs;
		m10 -= rhs;
		m11 -= rhs;

		return *this;
	}

	skMatrix2& skMatrix2::operator*= (float rhs)
	{
		m00 *= rhs;
		m01 *= rhs;
		m10 *= rhs;
		m11 *= rhs;

		return *this;
	}

	skMatrix2& skMatrix2::operator/= (float rhs)
	{
		m00 /= rhs;
		m01 /= rhs;
		m10 /= rhs;
		m11 /= rhs;

		return *this;
	}

}