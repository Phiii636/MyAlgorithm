#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace my
{
	template<class T>
	void swap(T& x, T& y);

	template<class T>
	T& larger(T& x, T& y, bool compareFunc(T&, T&) = [&](T& _x, T& _y) { return _x >= _y; });
	//template<class T>
	//T& max(vector<T>& nums);

	template<class T>
	void sort(void sortFunc(vector<T>), vector<T>& nums, bool compareFunc(T&, T&));
	template<class T>
	void sort_select(vector<T>& nums,
		bool compareFunc(T&, T&) = [&](T& x, T& y){ return x < y; });

	//����Ԫ��
	template<class T>
	void swap(T& x, T& y)
	{
		T tmp = x;
		x = y;
		y = tmp;
	}

	//���߸���Ԫ��
	template<class T>
	T& larger(T& x, T& y, bool compareFunc(T&, T&))
	{
		if (compareFunc(x, y))
			return x;
		else
			return y;
	}

	//�Զ�������
	template<class T>
	void sort(void sortFunc(vector<T>), vector<T>& nums, bool compareFunc(T&, T&))
	{

	}

	template<class T>
	void sort_select(vector<T>& nums, bool compareFunc(T&, T&))
	{
		size_t left{};
		size_t len = nums.size();

		while (left < len - 1)
		{
			size_t right = left + 1;
			T m{ nums[left] };
			while (right < len)
			{

			}
		}
	}


}