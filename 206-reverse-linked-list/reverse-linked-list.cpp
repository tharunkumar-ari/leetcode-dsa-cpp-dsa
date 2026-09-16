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
    ListNode* reverseList(ListNode* head) {
        ListNode*pr=nullptr;
        ListNode*ag=head;
        while(ag!=nullptr){
            ListNode*next=ag->next;
            ag->next=pr;
            pr=ag;
            ag=next;

        }
        return pr;
    }
};