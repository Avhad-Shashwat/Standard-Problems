#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *prev;
	Node *next;
	Node(int d){
		data=d;
		next=NULL;
		prev=NULL;
	}
};

void print(Node *head)
{
	Node *curr=head;
	while(curr->next!=NULL)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<curr->data;
}

int main()
{
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	print(head);
}
