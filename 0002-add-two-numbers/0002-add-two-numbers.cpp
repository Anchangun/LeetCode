class Solution{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* explorer = new ListNode;
        // ListNode를 기억하여 result를 반환하기 위함.
        (l1->next != nullptr || l2->next != nullptr) ? explorer->next = new ListNode : explorer->next = nullptr; 
        ListNode* result = explorer;
        int carry_over=0;
        // 둘중 하나라도 살아있다면 반복문을 통한 추가 방식
        while (l1 != nullptr || l2 != nullptr) {
            /* 나올 수 있는 수는 네가지
            * 1. l1만 살아 있는 경우 -> l1 만 더하고 다음으로 넘어가기.
            * 2. l2만 살아 있는 경우 -> l2 만 더하고 다음으로 넘어가기.
            * 3. 둘다 살아 있는 경우 -> 더하고 다음으로 넘어가기.
            * 4. 둘다 없는 경우 -> 반복문 탈출
            */
            // 1. l1만 살아있는 경우.
            if (l1 != nullptr && l2 == nullptr) {
                one_add_list(explorer, l1, carry_over);
            }
            else if (l2 != nullptr && l1 == nullptr) {
                one_add_list(explorer, l2, carry_over);
            }
            else {
                //
                carry_over += l2->val + l1->val;
                if (carry_over > 9) {
                    explorer->val = carry_over % 10;
                    carry_over /= 10;
                }
                else {
                    explorer->val = carry_over;
                    carry_over = 0;
                }
                l2 = l2->next;
                l1 = l1->next;
                if (l1 != nullptr || l2 != nullptr) {
                    if (explorer->next == nullptr) {
                        explorer->next = new ListNode();
                    }
                    explorer = explorer->next;
                }
                else {
                    if (carry_over > 0) {
                        explorer->next = new ListNode;
                        explorer = explorer->next;
                        explorer->val = carry_over;
                    }
                }
            }

        }
        return result;

    }
private : 
    void one_add_list(ListNode*& explorer, ListNode*& list,int& carry_over){
        //result = list;
        carry_over = list->val + carry_over;
        if (carry_over > 9) {
            explorer->val = carry_over%10;
            carry_over = (list->val + carry_over) / 10;
        }
        else {
            explorer->val = carry_over;
            carry_over = 0;
        }
        if (list->next != nullptr) {
            explorer->next = new ListNode;
            explorer = explorer->next;
        }
        else {
            if (carry_over > 0) {
                explorer->next = new ListNode;
                explorer = explorer->next;
                explorer->val = carry_over;
            }
        }
        list = list->next;
    }
};