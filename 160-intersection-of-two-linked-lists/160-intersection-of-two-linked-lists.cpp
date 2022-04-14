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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        
//     TC--> O(N^M)        
//     while(headA){
//         ListNode* temp=headB;
//         while(temp){
//             if(headA==temp){
//                 return headA;
//             }
//             temp=temp->next;
//         }
//         headA=headA->next;
//     }
//         return NULL;
//     }
        
        
//         TC--> O(M+N)
        //    space-->O(M+N)
//         unordered_map<ListNode*,int>mp;
//         ListNode* h1=headA,*h2=headB;
//         while(h1){
//             mp[h1]=h1->val;
//             h1=h1->next;
//         }
//         while(h2){
//             if(mp.count(h2)>0){
//                 return h2;
//             }
//             mp[h2]=h2->val;
//             h2=h2->next;
            
//         }
//         return NULL;
        
//     }
        ListNode* a=headA,*b=headB;
        while(a!=b){
            a=(a==NULL)?headB:a->next;
            b=(b==NULL)?headA:b->next;
        }
        return a;
    }
};