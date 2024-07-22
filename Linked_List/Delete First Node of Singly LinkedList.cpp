#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x)
	{
		data=x;
		next=NULL;
	}
};

Node *delHead(Node *head)
{
	if(head==NULL)
		return NULL;
	else{
		Node*temp=head->next;
		delete head;
		return temp;
	}
}


Node *insertEnd(Node *head,int x)
{
	Node *temp=new Node(x);
	if(head==NULL)
		return temp;
	Node *curr=head;
	while(curr->next!=NULL)
	{
		curr=curr->next;
		
	}
	curr->next=temp;
	return head;
}

void printList(Node *head)
{
	Node *curr=head;
	while(curr!=NULL)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}

int main()
{
	Node *head=new Node(100);
	head=insertEnd(head,30);
	head=insertEnd(head,20);
	head=insertEnd(head,10);
	head=delHead(head);
	head=delHead(head);
	printList(head);
}
