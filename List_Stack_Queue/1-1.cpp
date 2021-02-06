//Implementing dynamic array
//2021.2.7
#include<string>
#include<algorithm>
#include<iostream>

template<class T>
class dynamic_array {
	T* data;
	size_t n;
public:
	dynamic_array(int n) {
		this->n = n;
		data = new T[n];
	}

	dynamic_array(const dynamic_array<T>& other) {
		n = other.n;
		data = new T[n];

		for (int i = 0; i < n; i++) {
			data[i] = other[i];
		}
	}

	T& operator[](int index){
		return data[index];
	}

	const T& operator[](int index) const {
		return data[index];
	}

	T& at(int index) {
		if (index < n)
			return data[index];
		throw "Index out of range";

	}

	size_t size() const {
		return n;
	}

	~dynamic_array() {
		delete[] data;
	}

	T* begin() { return data; }

	const T* begin() const { return data; }
	// 추가 작성중
};