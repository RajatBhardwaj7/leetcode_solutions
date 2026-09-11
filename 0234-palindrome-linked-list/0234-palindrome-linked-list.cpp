class Solution {
public:
  ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=NULL){
            slow=slow->next;
        }
        slow=reverseList(slow);
        fast=head;
        while(slow!=NULL){
            if(fast->val!=slow->val){
                return false;
            }
            fast=fast->next;
            slow=slow->next;
        }
        return true;
    }
};