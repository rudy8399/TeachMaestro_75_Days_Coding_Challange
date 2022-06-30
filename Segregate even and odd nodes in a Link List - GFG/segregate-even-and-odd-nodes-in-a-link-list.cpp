// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        if(!head->next) return head;
        Node* dummyEven=new Node(0);
        Node* dummyOdd=new Node(0);
        Node* even=dummyEven;
        Node* odd=dummyOdd;
        Node* temp=head;
        
        while(temp){
            if((temp->data&1)==0){
                even->next=temp;
                even=even->next;
            }
            else{
                odd->next=temp;
                odd=odd->next;
            }
            temp=temp->next;
        }
        odd->next=NULL;
        even->next=NULL;
        if(dummyEven->next==NULL){
            head=dummyOdd->next;
        }
        else{
            even->next=dummyOdd->next;
            head=dummyEven->next;
        }
        delete dummyOdd;
        delete dummyEven;
        return head;
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends