#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>&v,int n)
{
	v[n]=1;
}

void search(vector<int>&v,int n)
{
	if(v[n]==1)
	{
		cout<<"Present"<<endl;
	}
	else{
		cout<<"Absent"<<endl;
	}
}

void Delete(vector<int>&v,int n)
{
	v[n]=0;
}

int main()
{
	vector<int>v(100,0);
	insert(v,10);
	insert(v,20);
	search(v,20);
	Delete(v,10);
	search(v,10);
}
