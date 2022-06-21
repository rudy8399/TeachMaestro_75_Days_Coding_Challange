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
        if(head==NULL|| head->next==NULL) return head;
        ListNode* left=head;
        ListNode* right=head;
        while(right){
            if(right->val==left->val){
                right=right->next;
                if(right==NULL) left->next=NULL;
            }
            else{
                left->next=right;
                left=right;
            }
        }
        return head;
    }
        
//         ListNode* ptr=head;        
//         while(ptr){
//             while(ptr->next and ptr->val==ptr->next->val){
//                 ptr->next=ptr->next->next;
//             }
//             ptr=ptr->next;
            
//         }
//         return head;
//     }
};