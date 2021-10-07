#include"Solution.h"
#include<vector>


int main(int argc, char* argv[]) {
	ListNode* node_1;
	ListNode* node_2;
	node_1 = (ListNode*)malloc(sizeof(ListNode));
	memset(node_1, 0, sizeof(ListNode));
	node_2 = (ListNode*)malloc(sizeof(ListNode));
	memset(node_2, 0, sizeof(ListNode));
	ListNode* temp_node_1 = (ListNode*)malloc(sizeof(ListNode));
	node_1->next = temp_node_1;
	ListNode* temp_node_2 = (ListNode*)malloc(sizeof(ListNode));
	node_2->next = temp_node_2;
	std::vector<int> arr_1 = { 1, 2, 3 };
	std::vector<int> arr_2 = { 1, 3, 5 };
	for (int loop_i=0; loop_i < arr_1.size(); loop_i++) {
		if (loop_i == arr_1.size() - 1) {
			temp_node_1->val = arr_1[loop_i];
			temp_node_1->next = NULL;
			break;
		}
		temp_node_1->val = arr_1[loop_i];
		temp_node_1->next = (ListNode*)malloc(sizeof(ListNode));
		temp_node_1 = temp_node_1->next;

	}

	for (int loop_j = 0; loop_j < arr_2.size(); loop_j++) {
		if (loop_j == arr_2.size() - 1) {
			temp_node_2->val = arr_2[loop_j];
			temp_node_2->next = NULL;
			break;
		}
		temp_node_2->val = arr_2[loop_j];
		temp_node_2->next = (ListNode*)malloc(sizeof(ListNode));
		temp_node_2 = temp_node_2->next;

	}

	
	Solution* sol = new Solution();
	sol->mergeTwoLists(node_1->next, node_2->next);
	return 0;

}