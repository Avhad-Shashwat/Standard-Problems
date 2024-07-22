#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count=0;
	int n;
	cout<<"Enter Number: ";
	cin>>n;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	cout<<"Number of Digits: "<<count;
}
