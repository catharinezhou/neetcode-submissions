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
    void reorderList(ListNode* head) {
        ListNode* l1 = head;
        ListNode* l2 = head;
        while(l2 != NULL && l2->next != NULL){
            l1 = l1->next;
            l2 = l2->next;
            l2 = l2->next;
        }
        ListNode* prev = NULL;
        ListNode* cur = l1->next;
        l1->next = NULL;
        ListNode* next;
        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        l1 = head;
        l2 = prev;
        ListNode* temp1;
        ListNode* temp2;
        while(l2 != NULL && l1 != NULL){
            temp1 = l1->next;
            l1->next = l2;
            temp2 = l2->next;
            l2->next = temp1;
            l1 = temp1;
            l2 = temp2;
        }
    }
};
