#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two Numbers: ";
	cin>>a>>b;
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	cout<<"GCD/HCF: "<<a;
}
