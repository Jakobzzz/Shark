/////////////////////////////////////////////////////////////////////////////////
//
// Shark 
// Copyright (c) 2018 Jakob Ahrneteg
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not be
//    misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////

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