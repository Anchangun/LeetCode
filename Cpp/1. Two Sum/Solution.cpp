#include "Solution.h"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target)
{
    std::vector<int> output_data;
    /* time over
    for (int loop_i = 0; loop_i < nums.size(); loop_i++) {
        for (int loop_j = loop_i + 1; loop_j < nums.size(); loop_j++) {
            if ((nums[loop_i] + nums[loop_j]) == target) {
                output_data.push_back(loop_i);
                output_data.push_back(loop_j);
                return output_data;
            }
        }
    }
    output_data.push_back(-1);
    */
    std::map<int, int> two_sum_map;
    for (int loop_i = 0; loop_i < nums.size(); loop_i++) {
        contains = target - nums[loop_i];
        if (two_sum_map.find(contains) == two_sum_map.end()) {
            int temp = nums[loop_i];
           two_sum_map.insert(std::pair<int,int>(temp,loop_i));
        }
        else {
            output_data.push_back(two_sum_map.find(contains)->second);
            output_data.push_back(loop_i);
            break;
        }
        
    }
    return output_data;
}

int Solution::getTarget()
{
    std::cout << "target data : ";
    std::cin >> input_target;
    return input_target;
}

std::vector<int>& Solution::inputData()
{
    int input_data=0;
    input_target = 0;
    std::vector<int>* input_vector;
    input_vector = new  std::vector<int>();
    std::cout << "[exit input -1]" << std::endl;
    while (1) {
    
        std::cout << "input data : ";
        std::cin >> input_data;
        if (input_data == -1) {
            break;
        }
        else
            input_vector->push_back(input_data);
    }
    return *input_vector;
}

void Solution::outputData(std::vector<int> data)
{
    std::vector<int>::iterator iter;
    std::cout << "output data : ";
    for (iter = data.begin(); iter != data.end(); iter++) {
        std::cout << *iter <<" ";
     }
    std::cout << std::endl;
}
