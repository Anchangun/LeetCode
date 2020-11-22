#include "Solution.h"
#include<map>
#include<algorithm>
int Solution::singleNumber(std::vector<int>& nums)
{
    
    /*
    time out
    std::vector<int>::iterator iter;
    int temp = 0;
    for (int loop_i = 0; loop_i < nums.size();) {
        temp = nums[loop_i];
        nums.erase(nums.begin()+loop_i);
        iter = std::find(nums.begin(), nums.end(), temp);
        if (iter == nums.end()) {
            return temp;
        }
        else{
            nums.push_back(temp);
            
        }
        return -1;
    }
    */
    std::map<int, bool> temp_map;
    std::pair<std::map<int, bool>::iterator, bool> check;
    for (int loop_i = 0; loop_i < nums.size(); loop_i++) {
        check= temp_map.insert(std::pair<int,bool>(nums[loop_i], true));
        if (check.second == false) {
            temp_map.erase(temp_map.find(nums[loop_i]));
            temp_map[nums[loop_i]] = false;
        }
       
    }
    for (auto iter = temp_map.begin(); iter != temp_map.end(); iter++) {
        if (iter->second) {
            return iter->first;
        }
    }
    return 0;
}




