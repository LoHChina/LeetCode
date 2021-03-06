/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode * p=head->next;
        head->next=head->next->next;
        p->next=head;
        head->next=swapPairs(head->next);
        return p;
    }
};