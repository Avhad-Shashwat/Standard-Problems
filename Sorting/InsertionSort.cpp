#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,3,4,2};
	int n=4;
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	for(int x:arr)
		cout<<x<<" ";
}
