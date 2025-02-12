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

int search(Node *head,int x)
{
	Node *curr=head;
	int pos=1;
	while(curr!=NULL)
	{
		if(curr->data==x)
			return pos;
		else{
			pos++;
			curr=curr->next;
		}
	}
	return -1;
}

int main()
{
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	cout<<search(head,30);
}
