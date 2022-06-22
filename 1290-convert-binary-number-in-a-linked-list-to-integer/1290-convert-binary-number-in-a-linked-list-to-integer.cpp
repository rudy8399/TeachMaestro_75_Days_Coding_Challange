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
    int getDecimalValue(ListNode* head) {
        int res=0;
        ListNode* temp=head;
        while(temp){
            res=2*res+temp->val;
            temp=temp->next;
        }
        return res;
    }
//         stack<int>s;
//         while(head!=NULL){
//             s.push(head->val);
//             head=head->next;
//         }
//         int sum=0;
//         int i=1;
//         while(!s.empty()){
//             sum+=s.top()*1*i;
//             s.pop();
//             i*=2;
//         }
//         return sum;
        
//     }
    
    
    
    //     ListNode* temp=head;
    //     int cnt=0;
    //     int pow2=1;
    //     while(temp){
    //         temp=temp->next;
    //         cnt++;
    //         pow2*=2;
    //     }
    //     int sum=0;
    //     pow2=pow2/2;
    //     temp=head;
    //     while(temp){
    //         sum+=pow2*temp->val;
    //         pow2=pow2/2;
    //         temp=temp->next;
    //     }
    //     return sum;
    // }
};