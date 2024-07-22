#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5]={1,2,2,2,5};
	int temp[5];
	temp[0]=arr[0];
	int res=1;
	for(int i=1;i<5;i++)
	{
		if(temp[res-1]!=arr[i])
		{
			temp[res]=arr[i];
			res++;
		}
	}
	for(int i=0;i<res;i++)
	{
		arr[i]=temp[i];
		cout<<arr[i]<<" ";
	}
	
}
