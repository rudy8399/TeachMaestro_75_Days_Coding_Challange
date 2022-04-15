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
    private:
    ListNode* reverseList(ListNode* head){
        ListNode*cur=head,*prev=NULL;
        while(cur){
            ListNode* nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        return prev;
    }
    ListNode* addTwoNumbers1(ListNode* l1, ListNode* l2) {
    ListNode* h1=l1,*h2=l2,*h3=NULL,* ptr=NULL;
        int rem=0,sum=0,carry=0;
        
        while(h1 && h2){
            sum=h1->val+h2->val+carry;
            rem=sum%10;
            carry=sum/10;
            ListNode* n=new ListNode(rem);
            if(h3==NULL){
                h3=n;
                ptr=n;
            }
            else{
                ptr->next=n;
                ptr=n;
            }
            h1=h1->next;
            h2=h2->next;
        }
        while(h1){
            sum=h1->val+carry;
            rem=sum%10;
            carry=sum/10;
            ListNode* n=new ListNode(rem);
            if(h3==NULL){
                h3=n;
                ptr=n;
            }
            else{
                ptr->next=n;
                ptr=n;
            }
            h1=h1->next;
        }
         while(h2){
            sum=h2->val+carry;
            rem=sum%10;
            carry=sum/10;
            ListNode* n=new ListNode(rem);
            if(h3==NULL){
                h3=n;
                ptr=n;
            }
            else{
                ptr->next=n;
                ptr=n;
            }
            h2=h2->next;
        }
        if(carry>0){
         ListNode* n=new ListNode(carry);
        ptr->next=n;
        }
        return h3;
    
    }
    public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverseList(l1);
        l2=reverseList(l2);
        ListNode* head=addTwoNumbers1(l1,l2);
        head=reverseList(head);
        return head;
    }
};