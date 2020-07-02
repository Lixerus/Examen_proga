#pragma once

template <typename T>
class Polinom
{
private:
	int p_size=0;
	T* pol;
public:
	Polinom(T* mass , int size)
	{
		pol = mass;
		p_size = size;
	}

	T& operator+(T& another);
	

	T& operator*(T& another);
	

	template <typename K>
	T& operator*(K m)
	{
		for (int i = 0; i < p_size; ++i) { pol[i] = pol[i] * m; }
		return *this;
	}

	T solution(double k);
};
