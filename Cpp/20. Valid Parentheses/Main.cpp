#include"Solution.h"
int main(int argc, char** argv) {
	Solution* sol = new Solution();
	if (sol->isValid("{}()[]"))
		std::cout << "Success"<<std::endl;
	else 
		std::cout << "Fail" << std::endl;

	return 0;
}