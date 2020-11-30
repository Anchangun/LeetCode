#include"Solution.h"

int main(int argc, char* argv[]) {
	Solution* sol = new Solution();
	std::vector<int> nums{ 8,-19,5,-4,20 };


	std::cout<<sol->maxSubArray(nums)<<std::endl;
	return 0;
}