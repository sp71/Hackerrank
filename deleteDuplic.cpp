/*
  Original Question: https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list
  Note: Question states "Do not be concerned with the memory deallocation"
*/

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
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    Node *prev, *starting, *curr;
    starting = curr = head;
    prev = NULL;
    while(curr)
    {
        if(prev != NULL && prev->data == curr->data)
        {
            prev->next = curr->next;
  //          prev = curr->next;
            curr = curr->next;
        }
        else
        {
            prev = curr;
            curr = curr -> next;
        }
    }
    return starting;
}
void Print(Node *head)
{
	bool ok = false;
	while(head != NULL)
	{
		if(ok)cout<<" ";
		else ok = true;
		cout<<head->data;
		head = head->next;
	}
	cout<<"\n";
}
Node* Insert(Node *head,int x)
{
   Node *temp = new Node();
   temp->data = x;
   temp->next = NULL;
   if(head == NULL) 
   {
       return temp;
   }
   Node *temp1;
   for(temp1 = head;temp1->next!=NULL;temp1= temp1->next);
   temp1->next = temp;return head;
}
int main()
{
	int t;
	cin>>t;
	while(t-- >0)
	{
		Node *A = NULL;
		int m;cin>>m;
		while(m--){
			int x; 
			cin>>x;
			A = Insert(A,x);}
		A = RemoveDuplicates(A);
		Print(A);
	}
}
