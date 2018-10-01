#pragma once

namespace shark
{
	class skVec2
	{
	public:
		skVec2();
		explicit skVec2(float x, float y);
		~skVec2() = default;

	public:
		// Assignments and equality operations
		inline skVec2& operator= (const skVec2& rhs) { x = rhs.x; y = rhs.y; return *this; }
		inline skVec2& operator= (const float& f) { x = f; y = f; return *this; }
		inline skVec2& operator- () { x = -x; y = -y; return *this; }
		inline bool operator== (const skVec2& rhs) const { return (x == rhs.x) && (y == rhs.y); }
		inline bool operator!= (const skVec2& rhs) const { return (x != rhs.x) || (y != rhs.y); }

		// skVec2 -> skVec2 operations
		inline const skVec2 operator+ (const skVec2& rhs) const { return skVec2(x + rhs.x, y + rhs.y); }
		inline const skVec2 operator- (const skVec2& rhs) const { return skVec2(x - rhs.x, y - rhs.y); }
		inline const skVec2 operator* (const skVec2& rhs) const { return skVec2(x * rhs.x, y * rhs.y); }
		inline const skVec2 operator/ (const skVec2& rhs) const { return skVec2(x / rhs.x, y / rhs.y); }

		// skVec2 -> this operations
		inline skVec2& operator+= (const skVec2& rhs) { x += rhs.x; y += rhs.y; return *this; }
		inline skVec2& operator-= (const skVec2& rhs) { x -= rhs.x; y -= rhs.y; return *this; }
		inline skVec2& operator*= (const skVec2& rhs) { x *= rhs.x; y *= rhs.y; return *this; }
		inline skVec2& operator/= (const skVec2& rhs) { x /= rhs.x; y /= rhs.y; return *this; }

		// Scalar -> skVec2 operations
		inline const skVec2 operator+ (float rhs) const { return skVec2(x + rhs, y + rhs); }
		inline const skVec2 operator- (float rhs) const { return skVec2(x - rhs, y - rhs); }
		inline const skVec2 operator* (float rhs) const { return skVec2(x * rhs, y * rhs); }
		inline const skVec2 operator/ (float rhs) const { return skVec2(x / rhs, y / rhs); }

		// Scalar -> this operations
		inline skVec2& operator+= (float rhs) { x += rhs; y += rhs; return *this; }
		inline skVec2& operator-= (float rhs) { x -= rhs; y -= rhs; return *this; }
		inline skVec2& operator*= (float rhs) { x *= rhs; y *= rhs; return *this; }
		inline skVec2& operator/= (float rhs) { x /= rhs; y /= rhs; return *this; }

	public:
		float x;
		float y;
	};
}