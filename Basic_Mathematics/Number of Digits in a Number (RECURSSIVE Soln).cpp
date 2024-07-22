#include<bits/stdc++.h>
using namespace std;

int countDigit(int n)
{
	if(n==0)
		return 0;
	return 1+countDigit(n/10);
}

int main()
{
	int n;
	cout<<"Enter Number: ";
	cin>>n;
	cout<<"Number of Digits: "<<countDigit(n);
}
