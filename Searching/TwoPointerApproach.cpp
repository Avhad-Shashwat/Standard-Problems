#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n,int x)
{
	int s=0,e=n-1;
	while(s<e){
	if(arr[s]+arr[e]==x)
	{
		return 1;
	}
	else if(arr[s]+arr[e]>x)
		e--;
	else
		s++;
	}
	return -1;
}

int main()
{
	int arr[]={2,5,8,12,30};
	int n=5;
	int x=17;
	cout<<sum(arr,n,x);
}
