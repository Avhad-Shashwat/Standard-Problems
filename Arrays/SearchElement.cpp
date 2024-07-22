#include<bits/stdc++.h>
using namespace std;

void searchElement(int arr[],int n,int x)
{
	int ans=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x){

			ans=i;
			break;
		}
		else
			ans=-1;
		
		
	}
	cout<<ans;
	
}

int main()
{
	int arr[]={20,5,7,25};
	int n=4;
	int x=15;
	searchElement(arr,n,x);
}
