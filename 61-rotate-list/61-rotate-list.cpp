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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL||k==0){
            return head;
        }
        //find length of linked list
        ListNode* temp=head;
        int lnth=1;
        while(temp){
            if(temp->next==NULL){
                break;
            }
            temp=temp->next;
            lnth++;
        }
        
        //connect last node to head ,create a cycle
        temp->next=head;
        
        //multiple of k will bring list to its orignal position so find                 modulus
        k=lnth-(k%lnth);
        while(k--){
            temp=temp->next;    
        }
        head=temp->next;
        temp->next=NULL;
        
        return head;   
    } 
       
};