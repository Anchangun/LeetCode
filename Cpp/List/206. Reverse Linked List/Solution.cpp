#include "Solution.h"

ListNode* Solution::reverseList(ListNode* head)
{
	if (head == nullptr) {
		return head;
	}
	head=reverseStack(head);
	return nullptr;
}

ListNode* Solution::inputData(std::vector<int> nums)
{
	ListNode* list=nullptr;
	ListNode* head=nullptr;
	for (int loop_i = 0; loop_i < nums.size(); loop_i++) {
		if (list == nullptr) {
			list = new ListNode();
			list->val = nums[loop_i];
			head = list;
			list->next = new ListNode();
			list = list->next;
		}
		else {
			if (loop_i < nums.size() - 1) {
				list->val = nums[loop_i];
				list->next = new ListNode();
				list = list->next;
			}
			else if(loop_i==nums.size()-1){
				list->val = nums[loop_i];
				list->next = nullptr;
				return head;
			}
		}

	}

	return head;
}

ListNode* Solution::reverseStack(ListNode* node)
{
	std::stack<int> reverse_stack;
	ListNode* explore = new ListNode();
	ListNode* result = explore;
	while (node != nullptr) {
		reverse_stack.push(node->val);
		node = node->next;
	}
	while (reverse_stack.size() != 0) {
		explore->val = reverse_stack.top();
		reverse_stack.pop();
		if (reverse_stack.size() == 0){
		 	explore->next =nullptr;
		}
		else {
			explore->next = new ListNode();
			explore = explore->next;
		}

	}

	return result;
}
