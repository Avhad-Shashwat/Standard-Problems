#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={3,4,3,4,5,6,4,4,7,7};
	for(int i=0;i<10;i++)
	{
		int count=0;
		for(int j=0;j<10;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count%2!=0)
			cout<<arr[i]<<" ";
	}
}
