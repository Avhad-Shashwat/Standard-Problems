#include<bits/stdc++.h>
using namespace std;

bool inSubSeq(string s1,string s2,int n,int m)
{
	int j=0;
	for(int i=0;i<n&&j<m;i++)
	{
		if(s1[i]==s2[j])
		{
			j++;
		}
	}
	return(j==m);
}

int main()
{
	string s1="abcdef";
	string s2="ade";
	int n=6;
	int m=3;
	cout<<inSubSeq(s1,s2,n,m);
}
