#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str="abc";
	int n=str.length();
	int powsize=pow(2,n);
	
	for(int counter=0;counter<powsize;counter++)
	{
		for(int j=0;j<n;j++)
		{
			if(counter&(1<<j)!=0)
				cout<<str[j];
		}
		cout<<endl;
	}
}
