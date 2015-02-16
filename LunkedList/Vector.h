#pragma once

#include <cmath>

namespace Lunk {

	template <typename T>
	class Vector {
	public:
		T x;
		T y;
		T z;

		Vector() : x(0), y(0), z(0){}

		Vector(T x, T y, T z) : x(x), y(y), z(z) {}

		Vector(T x, T y) : x(x), y(y), z(0) {}

		Vector operator+(const Vector &value);
		Vector operator+(const T value);
		bool operator==(const Vector &value);
	};

	template<typename T>
	bool Vector<T>::operator==(const Vector &value){
		return this->x == value.x 
			&& this->y == value.y 
			&& this->z == value.z;
	}

	template <typename T>
	Vector<T> Vector<T>::operator+(const Vector &value){
		Vector<T> retVal = Vector<T>();
		
		retVal.x = this->x + value.x;
		retVal.y = this->y + value.y;
		retVal.z = this->z + value.z;

		return retVal;
	}

	template<typename T>
	Vector<T> Vector<T>::operator+(const T value){
		Vector<T> retVal = Vector<T>();

		retVal.x = this->x + value;
		retVal.y = this->y + value;
		retVal.z = this->z + value;

		return retVal;
	}


	template<typename T>
	Vector<T> operator+(const T value, const Vector<T> &vec){
		Vector<T> retVal = Vector<T>();

		retVal.x = vec.x + value;
		retVal.y = vec.y + value;
		retVal.z = vec.z + value;

		return retVal;
	}
}
