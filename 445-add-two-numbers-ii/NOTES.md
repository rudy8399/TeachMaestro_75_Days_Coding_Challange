private:
int lengthOfLL(ListNode* head){
int cnt=0;
while(head){
head=head->next;
cnt++;
}
return cnt;
}
void addZeros(ListNode* head , int nums){
while(nums--){
ListNode* node=new ListNode(0);
node->next=head;
head=node;
}
}
void solve(ListNode* l1, ListNode* l2,ListNode* l2,int carry){
if(!l1 && !l2){
return ;
}
solve(l1->next,l2->next,l3,carry);
int sum=l1->val+l2->val+carry;
carry=sum/10;
}
public:
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
int len1=lengthOfLL(l1);
int len2=lengthOfLL(l2);
int diff=abs(len1-len2);
if(len1>len2)addZeros(l1,diff);
else addZeros(l2,diff);
int carry=0;
solve(l1,l2,l3,carry)
}