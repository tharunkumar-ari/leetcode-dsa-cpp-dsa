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
        ListNode*hap=new ListNode(0);
        hap->next=head;
        ListNode*s=hap;
        ListNode*f=hap;
        for(int i=0;i<=n;i++){
            f=f->next;
        }
        while(f!=nullptr){
            s=s->next;
            f=f->next;
        }
        s->next=s->next->next;
    
    return hap->next;
    }
};