#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5]={1,2,0,0,3};
	int n=5;
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0)
		{
			swap(arr[i],arr[count]);
			count++;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
