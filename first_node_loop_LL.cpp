// approach : use fast and slow pointer to detect loop first. Loop is detected at the insertion point, use that intersection point and send slow back to pointing head
// after that keep moving slow and intersect node one by one until they intersect. if they intersect then send the data for that node and stop the loop.

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}


// } Driver Code Ends
//User function Template for C++

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    Node* detectloop(Node* head)
    {
        if(head==NULL)
             return NULL;
        Node* slow = head;
        Node* fast = head;
        
        while(slow!=NULL & fast!=NULL)
        {
            fast = fast->next;
            if(fast!=NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;
            if(slow==fast)
                return slow;
        }
        return NULL;
    }
    int findFirstNode(Node* head)
    {
        // your code here
        if(head==NULL)
            return -1;
        Node* intersect = detectloop(head);
        if(intersect == NULL)
            return -1;

        Node* slow = head;
        while(slow!=intersect)
        {
            slow = slow->next;
            intersect = intersect->next;
        }
        
        return slow->data;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        int ans = ob.findFirstNode(head);
        cout<<ans<<"\n";
    }
	return 0;
}
// } Driver Code Ends
