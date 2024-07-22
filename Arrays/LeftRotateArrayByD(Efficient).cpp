#include<bits/stdc++.h>
using namespace std;

void rev(int arr[],int low,int high)
{
	while(low<high)
	{
		swap(arr[low],arr[high]);
		low++;
		high--;
	}
}

void LeftRotate(int arr[],int n,int d)
{
	rev(arr,0,d-1);
	rev(arr,d,n-1);
	rev(arr,0,n-1);
}

int main()
{
	int arr[]={1,2,3,4,5};
	int d=2;
	int n=5;
	LeftRotate(arr,n,d);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
