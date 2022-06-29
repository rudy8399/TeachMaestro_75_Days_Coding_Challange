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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* cur=head;
        ListNode* prev=dummy;
        while(cur && cur->next){
            if(cur->val==cur->next->val){
                int data=cur->val;
                ListNode* rest;
                while(cur && data==cur->val  ){
                    rest=cur->next;
                    cur->next=NULL;
                    delete cur;
                    cur=rest;
                }
                prev->next=cur;
            }
            else{
                cur=cur->next;
                prev=prev->next;
            }
        }
        return dummy->next;
    }
};