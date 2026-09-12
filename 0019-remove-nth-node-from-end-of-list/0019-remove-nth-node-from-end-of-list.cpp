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
        ListNode* g= head;
        ListNode* h=head;
        int count=0;
        while(g!=NULL){
            g=g->next;
            count++;
        }
       int co=count-n;
       if(co==0){
        return head->next;
       }
       while(co>1){
        h=h->next;
        co--;
       }
       h->next=h->next->next;
       return head;
    }
};