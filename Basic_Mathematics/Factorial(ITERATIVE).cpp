#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number: ";
	cin>>n;
	int res=1;
	for(int i=n;i>=1;i--)
	{
		res=res*i;
	}
	cout<<"Factorial is: "<<res;
}
