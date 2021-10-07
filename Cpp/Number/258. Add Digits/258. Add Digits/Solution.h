#pragma once

/*
Question
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
Input: 38
Output: 2
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2.
             Since 2 has only one digit, return it.
*/

/*
Result
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Add Digits.
Memory Usage: 6.3 MB, less than 27.32% of C++ online submissions for Add Digits.
*/
#include<iostream>
#include<windows.h>
class Solution
{
private : 
    int input_num;

public:
    int addDigits(int num);
    int inputData();
    void outputData(int num);
};

