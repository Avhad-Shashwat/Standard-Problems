#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={3,5,9,2,8,10,11};
	int x=17;
	int n=7;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==x){
				cout<<arr[i]<<" "<<arr[j]<<endl;
				break;
			}
		}
	}
}
