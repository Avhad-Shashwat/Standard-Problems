#include<bits/stdc++.h>
using namespace std;

void leftRotateOne(int arr[],int n)
{
	int temp=arr[0];
	for(int i=1;i<n;i++)
	{
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
}

void leftRotate(int arr[],int n,int d)
{
	for(int i=0;i<d;i++)
	{
		leftRotateOne(arr,n);
	}
}

int main()
{
	int arr[5]={1,2,3,4,5};
	int n=5;
	leftRotate(arr,n,2);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
