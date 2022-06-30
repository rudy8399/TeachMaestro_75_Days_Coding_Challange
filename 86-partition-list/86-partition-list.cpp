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
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next) return head;
        ListNode* smallStart=new ListNode();
        ListNode* largeStart=new ListNode();
        ListNode* small=smallStart;
        ListNode* large=largeStart;
        ListNode* temp=head;
        
        while(temp){
            if(temp->val<x){
                small->next=temp;
                small=small->next;
            }
            else{
                large->next=temp;
                large=large->next;
            }
            temp=temp->next;
        }
        small->next=NULL;
        large->next=NULL;
        if(smallStart->next==NULL){
            head=largeStart->next;
        }
        else{
            small->next=largeStart->next;
            head=smallStart->next;
        }
        delete smallStart;
        delete largeStart;
        return head;
    }
};