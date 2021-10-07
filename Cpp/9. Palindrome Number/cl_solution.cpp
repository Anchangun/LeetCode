#include "cl_solution.h"

bool cl_solution::fn_data_check(int x) {
	return  (x <= -2147483648 || x >= 2147483647) ? false : true;
}

int cl_solution::fn_user_input(){
	int temp_data = 0;
	std::cout << "Plz User Data" << std::endl;
	std::cin >> temp_data;
	return fn_data_check(temp_data) ? temp_data : fn_user_input();
}

bool cl_solution::isPalindrome(int x){
	std::string st_temp;
	std::vector<char>*vec_temp=NULL;
	int start = 0;
	int end = 0;

	if (x < 0) 
		return false;
	st_temp = std::to_string(x);
	vec_temp = new std::vector<char>(st_temp.length());
	std::copy(st_temp.begin(), st_temp.end(), vec_temp->begin());
	end = vec_temp->size();
	while ((start != end-1)&&(start<=end-1)) {
		if ((*vec_temp)[start] != (*vec_temp)[end-1]){
			return false;
		}
		if (start >= end-1) {
			break;
		}
		else {
			start++;
			end--;
		}
	}
	return true;

}

bool cl_solution::fn_run(){
	std::cout<<isPalindrome(fn_user_input())<<std::endl;
	return true;
}
