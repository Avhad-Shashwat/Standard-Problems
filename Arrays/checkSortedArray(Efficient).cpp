#include<bits/stdc++.h>
using namespace std;

bool checkSort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		if(arr[i]<arr[i-1])
			return false;
	}
	return true;
}

int main()
{
	int arr[]={1,2,3,4};
	cout<<checkSort(arr,4);
}
