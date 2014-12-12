// https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *curr;
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if(!head) return newNode;
    for(curr = head; curr->next; curr = curr->next);
    curr->next = newNode;
    return head;
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
