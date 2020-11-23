#include "Solution.h"

ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2)
{
	ListNode* sort_list = new ListNode(0);
	ListNode* header = sort_list;
	if (l1 == NULL && l2 == NULL) {
		return nullptr;
	}

	else if (l1 == NULL && l2 != NULL) {
		return l2;
	}
	else if (l1 != NULL && l2 == NULL) {
		return l1;
	}

	while (l1 != NULL && l2 != NULL) {
		if (l1->val <= l2->val) {
			header->val = l1->val;
			l1 = l1->next;
			header->next = (ListNode*)malloc(sizeof(ListNode));
			if(l1!=NULL){
			header->next = new ListNode(0);
			header = header->next;
			}
		
		}
		else {
			header->val = l2->val;
			l2 = l2->next;
			header->next = (ListNode*)malloc(sizeof(ListNode));
			if (l2 != NULL) {
				header->next = new ListNode(0);
				header = header->next;
			}
			
		}
	}

	if (l1 == NULL) {
		header->next = l2;
	}
	else if (l2 == NULL) {
		header->next = l1;
	}
	return sort_list;





}

