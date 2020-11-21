#include"Solution.h"
int main(int argc, char**) {
	Solution* sol = new Solution();
	std::vector<int> num  {1,2,2,3,3};
	std::cout << sol->singleNumber(num) << std::endl;
}