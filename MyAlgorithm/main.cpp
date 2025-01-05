#include "myAlgorithm.h"
#include <vector>
#include <string>

int main()
{
	vector<int> nums{ 10,20 };
	//int nums[2]{ 10,20 };

	int a{ 10 }, b{ 20 };
	my::swap<int>(a, b);

	//my::swap<int>(nums.begin(), nums.begin()-1);
	//cout << "nums[0] = " << nums[0] << endl;
	//cout << "nums[1] = " << nums[1] << endl;
}