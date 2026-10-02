class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        int len=1;
        ListNode* temp=head;
          while (temp->next != nullptr) {
            temp = temp->next;
            len++;
        }
        k=k%len;

        while (k > 0) {

            ListNode* secondLast = head;
            ListNode* last = head;
            while (last->next != nullptr) {
                secondLast = last;
                last = last->next;
            }

            // Move last node to the front
            secondLast->next = nullptr;
            last->next = head;
            head = last;

            k--;
        }
        return head;
    }
};