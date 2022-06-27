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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy=new ListNode();
        ListNode* temp=dummy;
        int carry=0;
        while(l1 || l2 || carry){
            int sum=0;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            
            ListNode* node=new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
        }
        return dummy->next;
    
    }
        //     ListNode* h1=l1,*h2=l2,*h3=NULL,* ptr=NULL;
//         int rem=0,sum=0,carry=0;
        
//         while(h1 && h2){
//             sum=h1->val+h2->val+carry;
//             rem=sum%10;
//             carry=sum/10;
//             ListNode* n=new ListNode(rem);
//             if(h3==NULL){
//                 h3=n;
//                 ptr=n;
//             }
//             else{
//                 ptr->next=n;
//                 ptr=n;
//             }
//             h1=h1->next;
//             h2=h2->next;
//         }
//         while(h1){
//             sum=h1->val+carry;
//             rem=sum%10;
//             carry=sum/10;
//             ListNode* n=new ListNode(rem);
//             if(h3==NULL){
//                 h3=n;
//                 ptr=n;
//             }
//             else{
//                 ptr->next=n;
//                 ptr=n;
//             }
//             h1=h1->next;
//         }
//          while(h2){
//             sum=h2->val+carry;
//             rem=sum%10;
//             carry=sum/10;
//             ListNode* n=new ListNode(rem);
//             if(h3==NULL){
//                 h3=n;
//                 ptr=n;
//             }
//             else{
//                 ptr->next=n;
//                 ptr=n;
//             }
//             h2=h2->next;
//         }
//         if(carry>0){
//          ListNode* n=new ListNode(carry);
//         ptr->next=n;
//         }
//         return h3;
    
//     }
        
};