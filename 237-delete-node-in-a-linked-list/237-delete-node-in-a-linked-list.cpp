/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp=node->next;
        node->val=temp->val;
        node->next=temp->next;
        temp->next=NULL;
        delete temp;    
    }
        //         int v=node->next->val;
//         ListNode* temp=node->next->next;
//         ListNode* temp2=node->next;
//         temp2->next=NULL;
//         delete temp2;
//         node->val=v;
//         node->next=temp;
        
//     }
};