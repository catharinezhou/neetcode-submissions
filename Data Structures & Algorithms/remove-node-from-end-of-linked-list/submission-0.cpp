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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int num = 0;
        ListNode* cur = head;
        ListNode* rem = head;
        while(cur != NULL){
            cur = cur->next;
            num++;
        }
        if(num == n)
            return head->next;
        for(int i = 0; i < num - n - 1; i++)
            rem = rem->next;
        rem->next = rem->next->next;
        return head;
    }
};
