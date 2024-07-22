#include<bits/stdc++.h>
using namespace std;

void countSet(int n)
{
	int res=0;
	while(n!=0)
	{
		n=(n&(n-1));
		res++;
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
