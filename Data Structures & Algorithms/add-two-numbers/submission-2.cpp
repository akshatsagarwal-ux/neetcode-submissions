/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
   public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum = l1->val + l2->val;
        if (sum >= 10) {
            carry = sum / 10;
            sum = sum % 10;
        }
        else{
            carry = 0;
        }
        ListNode* newhead = new ListNode(sum);
        ListNode* temp = newhead;
        while (l1->next && l2->next) {
            l1 = l1->next;
            l2 = l2->next;
            sum = l1->val + l2->val + carry;
            if (sum >= 10) {
                carry = sum / 10;
                sum = sum % 10;
            }
            else{
                carry = 0;
            }
            temp->next = new ListNode(sum);
            temp = temp->next;
        }
        if (l1->next == nullptr && l2->next == nullptr) {
            // sum = l1->val + l2->val + carry;
            // if (sum >= 10) {
            //     carry = sum / 10;
            //     sum = sum % 10;
            // }
            // temp->next = new ListNode(sum);
            // temp = temp->next;
            if (carry > 0) {
                temp->next = new ListNode(carry);
            }
            return newhead;
        } else if (l1->next == nullptr) {
            // sum = l1->val + l2->val + carry;
            // if (sum >= 10) {
            //     carry = sum / 10;
            //     sum = sum % 10;
            // }
            // temp->next = new ListNode(sum);
            // temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
            while (l2) {
                sum = l2->val + carry;
                if (sum >= 10) {
                    carry = sum / 10;
                    sum = sum % 10;
                }
                else{
                    carry = 0;
                }
                temp->next = new ListNode(sum);
                temp = temp->next;
                l2 = l2->next;
            }
            if (carry > 0) {
                temp->next = new ListNode(carry);
            }
            return newhead;
        } else if (l2->next == nullptr) {
            // sum = l1->val + l2->val + carry;
            // if (sum >= 10) {
            //     carry = sum / 10;
            //     sum = sum % 10;
            // }
            // temp->next = new ListNode(sum);
            // temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
            while (l1) {
                sum = l1->val + carry;
                if (sum >= 10) {
                    carry = sum / 10;
                    sum = sum % 10;
                }
                else{
                    carry = 0;
                }
                temp->next = new ListNode(sum);
                temp = temp->next;
                l1 = l1->next;
            }
            if (carry > 0) {
                temp->next = new ListNode(carry);
            }
            return newhead;
        }
    }
};
