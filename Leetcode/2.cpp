/*
Given an array of integers nums and an integer target, return indices 
of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, 
and you may not use the same element twice.

You can return the answer in any order.
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2 , int res = 0) {
        if(head1==NULL&&head2==NULL){
        if(res != 0){
            ListNode*temp = new ListNode();
            temp->val = res;
            temp->next = NULL;
            return temp;
        }
        else return NULL;
    }
    if(head1==NULL){
        head1 = head2;
        head2 = NULL;
    }
    if(head2 == NULL){
        res = head1->val+res;
    }
    if(head2!=NULL){
        res = head1->val+head2->val+res;
    }
    head1->val = res%10;
    res = res/10;
    head1->next = addTwoNumbers( head1->next, head2==NULL?head2:head2->next, res);
    return head1;
 }
};