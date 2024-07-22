#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[7]={4,3,4,4,4,5,5};
	int n=7;
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[j]==arr[i])
				count++;
		}
		if(count%2!=0)
			cout<<arr[i];
	}
	
}
