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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* h1=l1;
        ListNode* h2=l2;
        ListNode* h3;
        ListNode* t;
        if(!h1){
            return h2;
        }
        if(!h2){
            return h1;
        }
        if(h1->val< h2->val){
            h3=h1;
            t=h1;
            h1=h1->next;
        }
        else{
            h3=h2;
            t=h2;
            h2=h2->next;
        }
        while(h1!=NULL and h2!=NULL){
            if(h1->val<h2->val){
                t->next=h1;
                t=h1;
                h1=h1->next;
            }
            else{
                t->next=h2;
                t=h2;
                h2=h2->next;
            }
        }
        if(h1){
            t->next=h1;
            
        }
        if(h2){
            t->next=h2;
        }
        return h3;
        
    }
};