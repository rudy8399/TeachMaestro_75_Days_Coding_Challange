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
    void reorderList(ListNode* head) {
        stack<ListNode*>st;
        ListNode* cur=head;
        ListNode* nxt=NULL;
        int cnt=0;
        while(cur){
            st.push(cur);
            cur=cur->next;
            cnt++;
        }
        cur=head;
        int i=1;
        while(i<=cnt/2){
            nxt=cur->next;
            cur->next=st.top();
            st.pop();
            cur->next->next=nxt;
            cur=nxt;
            i++;
        }
        cur->next=NULL;
    }
};