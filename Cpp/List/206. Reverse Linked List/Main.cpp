#include"Solution.h"

int main(int argc, char* argv[]) {
	std::vector<int> nums;
	Solution* sol = new Solution();
	sol->reverseList(sol->inputData(nums));
	return 0;
}