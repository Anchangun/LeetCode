#pragma once
/*
206. Reverse Linked List
Question :
Reverse a singly linked list.
*/
/*
Exapmle :
Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
*/

/*
Follow up:

A linked list can be reversed either iteratively or recursively. Could you implement both?
*/
/*
Result :
Runtime: 12 ms, faster than 6.91% of C++ online submissions for Reverse Linked List.
Memory Usage: 9.1 MB, less than 12.32% of C++ online submissions for Reverse Linked List.
*/


#include<iostream>
#include<vector>
#include<stack>
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution
{
private: 
    ListNode* result_node;
public :
    ListNode* reverseList(ListNode* head);
    ListNode* inputData(std::vector<int> nums);
    ListNode* reverseStack(ListNode* node);
};

