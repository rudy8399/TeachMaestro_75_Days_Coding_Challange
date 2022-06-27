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
           ListNode* prev=NULL;
            ListNode* cur=head;
            while(cur){
                ListNode* nxt=cur->next;
                cur->next=prev;
                prev=cur;
                cur=nxt;
            }
            return prev;
        }
    ListNode* addTwoNumb(ListNode* l1, ListNode* l2){
        int carry=0;
        ListNode* dummy = new ListNode();
        ListNode* temp=dummy;
        while(carry || l1 || l2){
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
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverseList(l1);
        l2=reverseList(l2);
        
        ListNode* l3=addTwoNumb(l1,l2);
        
        l3=reverseList(l3);
        l2=reverseList(l2);
        l1=reverseList(l1);
        
        return l3;      
    }
};