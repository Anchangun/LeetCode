#include "Solution.h"

int Solution::maxSubArray(std::vector<int>& nums)
{
	int result = nums[0];
	int temp = nums[0];

	for (int i = 1; i < nums.size(); i++) {
		temp = std::max(nums[i], temp + nums[i]);
		result = std::max(temp, result);
	}
	return result;
}



