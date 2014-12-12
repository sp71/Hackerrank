// https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/submissions/code/10538092
#include <iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

struct Node
{
	int data;
	Node *next;
};
/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

void Print(Node *head)
{
	Node *temp = head;
	while(temp!= NULL){ cout<<temp->data<<"\n";temp = temp->next;}
}
int main()
{
	int t;
	cin>>t;
	Node *head = NULL;
	while(t-- >0)
	{
		int x; cin>>x;
		head = Insert(head,x);
	}
	Print(head);
}
