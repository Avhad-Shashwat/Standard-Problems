#include<bits/stdc++.h>
using namespace std;

void insert(int arr[],int n,int x,int cap,int pos)
{
	if(n==cap)
		cout<<"Cant insert";
	int idx=pos-1;
	for(int i=n-1;i>=idx;i--)
		arr[i+1]=arr[i];
	arr[idx]=x;
	for(int i=0;i<cap;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={1,2,4,5};
	int x=3;
	int pos=3;
	int n=4;
	int cap=5;
	insert(arr,n,x,cap,pos);
}
