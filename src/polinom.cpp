#include "Polinom.h"

template <typename T>
T& Polinom<T>::operator+(T& another)
{

	if (p_size <= another.p_size)
		p_size = another.p_size;
	for (int i = 0; i < p_size; ++i)
		pol[i] = pol[i] + another.pol[i];

	return *this;
}

template <typename T>
T& Polinom<T>::operator*(T& another)
{
	int temp = 0;
	if (p_size >= another.p_size)
	{
		temp = another.p_size;
	}
	else
	{
		temp = p_size;
	}
	for (int i = 0; i < temp; ++i)
		pol[i] = pol[i] * another.pol[i];

	return *this;
}

template <typename T>
T Polinom<T>::solution(double k)
{
	double solut = 0;
	double tmp = 0;
	for (int i = 0; i < p_size; ++i)
	{
		for (int z = 0; z < i; ++z)
		{
			tmp = tmp + k;
		}
		solut += tmp * pol[i];
		tmp = 0;
	}
	return solut;
}
