#include<bits/stdc++.h>
using namespace std;

int repeat(int arr[],int n)
{
	bool visit[n-1];
	memset(visit,false,sizeof(visit));
	for(int i=0;i<n;i++)
	{
		if(visit[arr[i]])
			return arr[i];
		
		visit[arr[i]]=true;
	}
	
}

int main()
{
	int arr[]={1,0,2,3,2,2};
	int n=6;
	cout<<repeat(arr,n);
	
}
