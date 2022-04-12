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
    ListNode* middleNode(ListNode* head) {
    int cnt=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            cnt++;
        }
        int i=0;
        temp=head;
        while(temp && i<cnt/2 ){
            temp=temp->next;
            i++;    
        }
        return temp;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
        //     ListNode* slow=head;
    //     ListNode* fast=head;
    //     while(fast->next!=NULL and fast->next->next!=NULL){
    //         fast=fast->next->next;
    //         slow=slow->next;
    //     }
    //     if(fast->next!=NULL){
    //         return slow->next;
    //     }
    //     return slow;    
    // }
};