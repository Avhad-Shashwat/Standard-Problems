#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,1,2,2,2};
	int n=5;
	int k=2;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			count++;
		}
	}
	cout<<count;
}
