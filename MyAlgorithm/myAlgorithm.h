#pragma once
#include <iostream>
#include <iterator>
using namespace std;

namespace my
{
	template<class T>
	void swap(T& x, T& y);
	template<class T>
	void swap(iterator<T, T>& x, iterator<T, T>& y);

	//½»»»ÔªËØ
	template<class T>
	void swap(T& x, T& y)
	{
		T tmp = x;
		x = y;
		y = tmp;
	}

	template<class T>
	void swap(iterator<T, T>& x, iterator<T, T>& y)
	{
		swap<T>(*x, *y);
	}

}