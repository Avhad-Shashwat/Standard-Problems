#include<bits/stdc++.h>
using namespace std;

void Delete(int arr[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
			break;
	}
	if(i==n)
		cout<<"Last number deleted"<<endl;
	for(int j=i;j<n-1;j++)
		arr[j]=arr[j+1];
	
	for(int i=0;i<n-1;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={1,2,4,5};
	int x=1;
	int n=4;
	Delete(arr,n,x);
}
