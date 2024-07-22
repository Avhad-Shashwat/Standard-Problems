#include<bits/stdc++.h>
using namespace std;

bool Anagram(string &s1,string &s2)
{
	int count[256]={0};
	for(int i=0;i<s1.length();i++)
	{
		count[s1[i]]++;
		count[s2[i]]--;
	}
	for(int i=0;i<256;i++)
	{
		if(count[i]!=0)
			return false;
	}
	return true;
}

int main()
{
	string s1="silent";
	string s2="listen";
	cout<<Anagram(s1,s2);
}
