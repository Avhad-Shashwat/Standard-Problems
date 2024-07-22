#include<bits/stdc++.h>
using namespace std;

int kthSmall(int arr[],int n,int k)
{
	sort(arr,arr+n);
	return arr[k-1];
		
}

int main()
{
	int arr[]={3,2,4,1};
	int n=4;
	int k=3;
	cout<<kthSmall(arr,n,k);
}
