#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={8,7,6,8,6,6,6,6};
	int n=8;
	for(int i=0;i<n;i++)
	{
		int count=1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count>n/2)
			cout<<arr[i];
	}
	
}
