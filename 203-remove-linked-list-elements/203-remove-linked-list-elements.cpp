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
    ListNode* removeElements(ListNode* head, int val) {
   if(head==NULL || head->next==NULL && head->val==val)return NULL;       
        ListNode* cur=head->next;
        ListNode* prev=head;
        while(cur){
            if(cur->val==val){
                ListNode* temp=cur->next;
                cur->next=NULL;
                delete cur;
                prev->next=temp;
                cur=temp;
            }
            else{
                prev=cur;
                cur=cur->next;
            }
        }
        if(head->val==val){
            ListNode* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
            
        }
        return head;
    }
        
        
        //not my code copied from somewhere
//         ListNode *pseudo_head = new ListNode(0);
//         pseudo_head->next = head;
//         ListNode *cur = pseudo_head;
//         while(cur){
//             if(cur->next && cur->next->val == val)  
//                 cur->next = cur->next->next;
//             else
//                 cur = cur->next;
//         }
//         return pseudo_head->next;
//     }
//         if(head==NULL || head->next==NULL && head->val==val){
//             return NULL;
//         }
//         ListNode* temp=head;
//         while(temp){
//             if(temp->next==NULL){
//                 break;
//             }
//             if(temp->next->val==val){
//                 ListNode* node=temp->next;
//                 ListNode* node2=node->next;
//                 delete node;
//                 temp->next=node2;
//             }
//             else{
//                 temp=temp->next;
//             }
            
//         }
//         if(head->val==val){
//             head=head->next;
//         }
//         return head;
        
//     }
       
};