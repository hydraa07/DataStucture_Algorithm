// C++ program to print reverse of a linked list
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node
{
	public:
	int data;
	Node* next;
};

/* Function to reverse the linked list */
void printReverse(Node* head)
{
	// Base case
	if (head == NULL)
	return;

	// print the list after head node
	printReverse(head->next);

	// After everything else is printed, print head
	cout << head->data << " ";
}

void push(Node* &head, int d){
    // creat a new node
    Node *p = new Node(d);
    Node*temp;
    temp=head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = p; 
}

/* Driver code*/
int main()
{
	// Let us create linked list 1->2->3->4
	Node* head;
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	
	printReverse(head);
	return 0;
}

// This code is contributed by rathbhupendra
