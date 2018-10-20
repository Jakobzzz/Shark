#pragma once

namespace shark
{

	class skVec2
	{

	public:

		///
		explicit skVec2(float x);

		///
		explicit skVec2(float x, float y);

		///
		skVec2();

		///
		~skVec2() = default;

		///
		float length() const;

		///
		float lengthSquared() const;

		///
		float distance(const skVec2& v) const;
		
		///
		float distanceSquared(const skVec2& v) const;
		
		///
		float dot(const skVec2& v) const;

		///
		inline skVec2& operator= (const skVec2& rhs) { x = rhs.x; y = rhs.y; return *this; }

		///
		inline skVec2& operator= (const float& f) { x = f; y = f; return *this; }

		///
		inline skVec2& operator- () { x = -x; y = -y; return *this; }

		///
		inline bool operator== (const skVec2& rhs) const { return (x == rhs.x) && (y == rhs.y); }

		///
		inline bool operator!= (const skVec2& rhs) const { return (x != rhs.x) || (y != rhs.y); }

		///
		inline const skVec2 operator+ (const skVec2& rhs) const { return skVec2(x + rhs.x, y + rhs.y); }

		///
		inline const skVec2 operator- (const skVec2& rhs) const { return skVec2(x - rhs.x, y - rhs.y); }

		///
		inline const skVec2 operator* (const skVec2& rhs) const { return skVec2(x * rhs.x, y * rhs.y); }

		///
		inline const skVec2 operator/ (const skVec2& rhs) const { return skVec2(x / rhs.x, y / rhs.y); }

		///
		inline skVec2& operator+= (const skVec2& rhs) { x += rhs.x; y += rhs.y; return *this; }

		///
		inline skVec2& operator-= (const skVec2& rhs) { x -= rhs.x; y -= rhs.y; return *this; }
		
		///
		inline skVec2& operator*= (const skVec2& rhs) { x *= rhs.x; y *= rhs.y; return *this; }

		///
		inline skVec2& operator/= (const skVec2& rhs) { x /= rhs.x; y /= rhs.y; return *this; }

		///
		inline const skVec2 operator+ (float rhs) const { return skVec2(x + rhs, y + rhs); }

		///
		inline const skVec2 operator- (float rhs) const { return skVec2(x - rhs, y - rhs); }

		///
		inline const skVec2 operator* (float rhs) const { return skVec2(x * rhs, y * rhs); }

		///
		inline const skVec2 operator/ (float rhs) const { return skVec2(x / rhs, y / rhs); }

		///
		inline skVec2& operator+= (float rhs) { x += rhs; y += rhs; return *this; }

		///
		inline skVec2& operator-= (float rhs) { x -= rhs; y -= rhs; return *this; }

		///
		inline skVec2& operator*= (float rhs) { x *= rhs; y *= rhs; return *this; }

		///
		inline skVec2& operator/= (float rhs) { x /= rhs; y /= rhs; return *this; }

		float x;
		float y;

	};

}