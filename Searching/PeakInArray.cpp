#include<bits/stdc++.h>
using namespace std;

int peak(int arr[],int n)
{
	if(n==1)return arr[0];
	if(arr[0]>=arr[1])return arr[0];
	if(arr[n-1]>arr[n-2])return arr[n-1];
	for(int i=1;i<n-1;i++)
	{
		if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
			return arr[i];
	}
}

int main()
{
	int arr[]={5,10,15,5,3};
	int n=5;
	cout<<peak(arr,n);
}
