#include<bits/stdc++.h>
using namespace std;

int intersect(int a[],int b[],int m,int n)
{
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(i>0 && a[i]==a[i-1])
		{
			i++;
			continue;
		}
		if(a[i]<b[i]){
			i++;
		}
		else if(a[i]>b[i]){
			j++;
		}
		else{
			cout<<a[i]<<" ";
			i++;
			j++;
		}
	}
}

int main()
{
	int arr1[]={1,20,20,40,60};
	int arr2[]={2,20,20,40};
	int n1=5;
	int n2=4;
	intersect(arr1,arr2,n1,n2);
}
