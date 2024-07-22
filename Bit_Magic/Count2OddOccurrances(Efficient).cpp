#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={3,4,3,4,5,6,4,4,7,7};
	int Xor=0,res1=0,res2=0;
	for(int i=0;i<10;i++)
	{
		Xor=Xor^arr[i];
	}
	int sn=Xor&~(Xor-1);  //rightmost set bit
	for(int i=0;i<10;i++)
	{
		if(arr[i]&sn!=0)
			res1=res1^arr[i];
		else
			res2=res2^arr[i];
	}
	cout<<res1<<" "<<res2;
}
