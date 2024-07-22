#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={0,2,1,3,2,2};
	int n=6;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
				cout<<arr[i];
				break;
		}
		
	}
}
