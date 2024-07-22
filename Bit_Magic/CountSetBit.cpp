#include<bits/stdc++.h>
using namespace std;

void countSet(int n)
{
	int res=0;
	while(n!=0)
	{
		if((n&1)==1)
		{
			res++;
		}
		n=n>>1;
	}  
	cout<<res;
}

int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	countSet(n);
}
