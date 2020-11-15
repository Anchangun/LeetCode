#pragma once
/*
Question
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1: 
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:

    2 <= nums.length <= 105
    -109 <= nums[i] <= 109
    -109 <= target <= 109
    Only one valid answer exists.

*/
/*
Runtime: 292 ms, faster than 34.21% of C++ online submissions for Two Sum.
Memory Usage: 74.9 MB, less than 5.05% of C++ online submissions for Two Sum.
*/

/*
Header File
*/
#include<iostream>
#include<vector>
#include<map>

class Solution
{
private:
    int input_target;
    int contains;
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target);
    int getTarget();
    std::vector<int>& inputData();
    void outputData(std::vector<int> data);

};

