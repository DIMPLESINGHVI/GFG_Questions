// C++ program to reverse alternate
// k nodes in a linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node
{
	public:
	int data;
	Node* next;
};

/* Reverses alternate k nodes and
returns the pointer to the new head node */
Node *kAltReverse(Node *head, int k)
{
	Node* temp = head;
	int len;
	while(temp!=NULL)
	{
	    temp = temp->next;
	    len++;
	}
	
	Node* curr = head;
	Node* prev = NULL;
	Node* fwd = NULL;
	int cnt=0;
	while(curr!=NULL && cnt<k)
	{
	    fwd = curr->next;
	    curr->next = prev;
	    prev = curr;
	    curr = fwd;
	    cnt++;
	}
	if(head!=NULL)
	    head->next = fwd;
	
	//Node*tp = fwd;
	int ct = 0;
	while(ct<k-1 && fwd!=NULL)  //skip k nodes
	{
	    fwd = fwd->next;
	    ct++;
	}
	
	if(fwd!=NULL)
	{
	    fwd->next = kAltReverse(fwd->next,k); //pass for the next k reversal
	}
	
	return prev;
}

/* UTILITY FUNCTIONS */
/* Function to push a node */
void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list of the new node */
	new_node->next = (*head_ref);	

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print linked list */
void printList(Node *node)
{
	int count = 0;
	while(node != NULL)
	{
		cout<<node->data<<" ";
		node = node->next;
		count++;
	}
}

/* Driver code*/
int main(void)
{
	/* Start with the empty list */
	Node* head = NULL;
	int i;
	
	// create a list 1->2->3->4->5...... ->20
	for(i = 14; i > 0; i--)
	push(&head, i);

	cout<<"Given linked list \n";
	printList(head);
	int k;
	cin>>k;
	head = kAltReverse(head, k);

	cout<<"\n Modified Linked list \n";
	printList(head);
	return(0);
}


// This code is contributed by rathbhupendra
