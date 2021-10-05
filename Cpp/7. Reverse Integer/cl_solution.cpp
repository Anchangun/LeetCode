#include "cl_solution.h"
int cl_solution::reverse(int x) {
	
    long result = 0;
    bool flag = true;
    if (!fn_data_check(x))
        return 0;


    flag = (x >= 0) ? true : false;


    if (!flag) {
        x *= -1;
    }

    while (x >= 10) {
        result += x % 10;
        result *= 10;
        x /= 10;
    }
    result += x % 10;


    if (!flag)
        result *= -1;


    return fn_data_check(result) ? result : 0;
	
	
} 

bool cl_solution::fn_data_check(int x) {
	return  (x <= -2147483648 || x >= 2147483647) ? false : true;
}


int cl_solution::fn_user_input() {
	int temp_data = 0;
	std::cout << "Plz User Data" << std::endl;
	std::cin >> temp_data;
	return fn_data_check(temp_data) ? temp_data : fn_user_input();
}

int cl_solution::fn_run() {
	std::cout << reverse(fn_user_input()) << std::endl;
	
	return 0;
}

