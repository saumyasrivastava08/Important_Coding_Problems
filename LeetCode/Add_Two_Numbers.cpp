//Problem: LeetCode(https://leetcode.com/problems/add-two-numbers/)


 class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode head;
        ListNode* temp = &head;
        while (l1 || l2) {
            int val = carry + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            carry = val/10;
            temp->next = new ListNode(val%10);
            temp = temp->next;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        if (carry)
            temp->next = new ListNode(carry);
        return head.next;
    }
};