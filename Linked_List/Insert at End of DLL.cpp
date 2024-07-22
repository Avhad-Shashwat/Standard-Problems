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

Node *insertEnd(Node *head,int data)
{
	Node *temp=new Node(data);
	if(head==NULL)
		return temp;
	Node *curr=head;
	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
	curr->next=temp;
	temp->prev=curr;
	return head;
}

int main()
{
	Node *head=NULL;
	head=insertEnd(head,10);
	head=insertEnd(head,20);
	
	print(head);
}
