#include<bits/stdc++.h>
using namespace std;

int countDis(int arr[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		bool flag=false;
		for(int j=0;j<i;j++)
		{
			if(arr[i]==arr[j])
			{
				flag=true;
				break;
			}
		}
		if(flag==false)
			res++;
	}
	return res;
}

int main()
{
	int arr[]={10,20,10,20,30};
	int n=5;
	cout<<countDis(arr,n);
}
