#include <cstdlib>
#include <iostream>
#include <ostream>
#include <vector>

template <typename T>
class MyVector {
  private:
	T *values;
	int count;
	int length;

  public:
	MyVector()
	{
		values = new T[2];
		length = 2;
		count = 0;
	}

	~MyVector() { delete[] values; }

	void emplace(T element)
	{
		if (count == length - 1) {
			T *temp = new T[length * 2];

			for (int i = 0; i < count; i++) {
				temp[i] = values[i];
			}

			// memcpy(temp, values, count * sizeof(T));
			delete[] values;
			values = temp;

			length *= 2;
		}

		values[count] = element;
		count++;
	}

	void erase(T *pos)
	{
		T *tmp = pos;
		while (tmp != end()) {
			*tmp = *(tmp + 1);
			tmp++;
		}
		count--;
	}

	T *begin() { return values; }

	T *end() { return values + count; }

	T operator[](int idx) const { return values[idx]; }

	T &operator[](int idx) { return values[idx]; }

	int size() { return count; }
};

template <typename T>
std::ostream &operator<<(std::ostream &stream, MyVector<T> vector)
{
	stream << "[";
	for (T elem : vector) {
		stream << elem << ",";
	}
	stream << "]";
	return stream;
}

template <typename T, typename P>
MyVector<decltype(std::declval<T>() + std::declval<P>())> operator+(MyVector<T> &vec1, MyVector<P> &vec2)
{
	if (vec1.size() != vec2.size())
		throw std::invalid_argument("MyVector operator+ - vectors are of different lenghts");

	MyVector<decltype(std::declval<T>() + std::declval<P>())> resVector;

	auto it1 = vec1.begin();
	auto it2 = vec2.begin();

	for (int i = 0; i < vec1.size(); i++) {
		resVector.emplace(*it1 + *it2);

		it1++;
		it2++;
	}

	return resVector;
}

int main()
{

	MyVector<int> mvec1;
	mvec1.emplace(3);
	mvec1.emplace(2);
	mvec1.emplace(1);

	std::cout << mvec1 << std::endl;

	MyVector<std::string> mvec2;
	mvec2.emplace("aaaa");
	mvec2.emplace("bbbb");
	mvec2.emplace("ccc");
	mvec2.emplace("ddd");
	mvec2.emplace("eeee");

	std::cout << mvec2 << std::endl;

	mvec2.erase(mvec2.begin() + 2);

	std::cout << mvec2 << std::endl;

	MyVector<int> mvec3;
	mvec3.emplace(4);
	mvec3.emplace(3);
	mvec3.emplace(2);

	MyVector<double> mvec4;
	mvec4.emplace(4);
	mvec4.emplace(5);
	mvec4.emplace(7);

	auto res = mvec3 + mvec4;

	std::cout << mvec3 << " + " << mvec4 << " = " << res << std::endl;

	return 0;
}
