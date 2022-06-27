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
    ListNode* findMiddle(ListNode* head){
        ListNode *slow=head,*fast=head;
        //slow=head;fast=head;
        while(fast->next && fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        ListNode* prev=head;
        ListNode* cur=head->next;
        while(cur){
            ListNode* nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        return prev;
    }
    bool check(ListNode* head,ListNode* secondHead){
        while(head && secondHead){
            if(head->val!=secondHead->val)return false;
            head=head->next;
            secondHead=secondHead->next;
        }
        return true;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* mid=findMiddle(head);
        ListNode* secondHead=reverse(mid);
        mid->next=NULL;
        return check(head,secondHead);
    }
};