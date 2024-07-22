#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number: ";
	cin>>n;
	cout<<"Number of Digits: "<<(int)log10(abs(n))+1;
}

//Not valid for negative number therefore use abs(n)
