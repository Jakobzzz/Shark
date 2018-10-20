#pragma once

namespace shark
{

	class skMatrix2
	{

	public:

		///
		explicit skMatrix2(float m00, float m01, float m10, float m11);

		///
		skMatrix2();

		///
		~skMatrix2() = default;

		///
		skMatrix2 transpose() const;

		///
		skMatrix2 inverse() const;

		///
		float determinant() const;

		///
		skMatrix2& operator= (const skMatrix2& rhs);

		///
		skMatrix2& operator- ();

		///
		bool operator== (const skMatrix2& rhs) const;

		///
		bool operator!= (const skMatrix2& rhs) const;

		///
		const skMatrix2 operator+ (const skMatrix2& rhs) const;

		///
		const skMatrix2 operator- (const skMatrix2& rhs) const;

		///
		const skMatrix2 operator* (const skMatrix2& rhs) const;

		///
		//const skMatrix2 operator/ (const skMatrix2& rhs) const;

		///
		skMatrix2& operator+= (const skMatrix2& rhs);

		///
		skMatrix2& operator-= (const skMatrix2& rhs);

		///
		skMatrix2& operator*= (const skMatrix2& rhs);

		///
		//skMatrix2& operator/= (const skMatrix2& rhs);

		///
		const skMatrix2 operator+ (float rhs) const;

		///
		const skMatrix2 operator- (float rhs) const;

		///
		const skMatrix2 operator* (float rhs) const;

		///
		const skMatrix2 operator/ (float rhs) const;

		///
		skMatrix2& operator+= (float rhs);

		///
		skMatrix2& operator-= (float rhs);

		///
		skMatrix2& operator*= (float rhs);

		///
		skMatrix2& operator/= (float rhs);

		float m00, m01;
		float m10, m11;

	};

}