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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*first=list1;
        ListNode*second=list2;
        ListNode*dummy=new ListNode(0);
        ListNode*curr=dummy;
        while(first!=nullptr && second!=nullptr){
            if(first->val <= second->val){
                curr->next=first;
                first=first->next;
            }
            else{
                curr->next=second;
                second=second->next;
            }
            curr=curr->next;

        }
        if(first!=nullptr){
            curr->next=first;
        }
        else{
            curr->next=second;
        }
        return dummy->next;
    }
};