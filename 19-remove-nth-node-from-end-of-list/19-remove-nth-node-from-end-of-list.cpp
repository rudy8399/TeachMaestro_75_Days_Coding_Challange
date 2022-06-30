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
        if(!head->next)return NULL;
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* fast=dummy,*slow=dummy;
        for(int i=1;i<=n;i++){
            fast=fast->next;
        }
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* temp=slow->next;
        slow->next=slow->next->next;
        delete temp;
        return dummy->next;
    
    }
        
        //     if(head->next==NULL){
    //         delete head;
    //         return NULL ;
    //     }
    //     ListNode* fast=head;
    //     ListNode* slow=head;
    //     ListNode* temp=NULL;
    //     int i=0;
    //     while(i<n){
    //         fast=fast->next;
    //         i++;
    //     }
    //     if(fast==NULL){
    //         head=head->next;
    //         slow->next=NULL;
    //         delete slow;
    //         return head;
    //     }
    //     while(fast){
    //         if(fast->next==NULL){
    //             break;
    //         }
    //         fast=fast->next;
    //         slow=slow->next;
    //     }
    //     temp=slow->next;
    //     slow->next=temp->next;
    //     temp->next=NULL;
    //     delete temp;
    //     return head;
    // }
};