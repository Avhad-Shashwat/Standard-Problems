#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
		}
	}
}

int main()
{
	int n;
	cout<<"Enter Number: ";
	cin>>n;
	printDivisors(n);
}
