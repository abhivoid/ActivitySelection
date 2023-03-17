#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,c;
	int s[2][10]={{1,3,0,5,8,5},{2,4,6,7,9,9}};
	cout<<"("<<s[0][0]<<","<<s[1][0]<<")";
	c=s[1][0];
	for(i=1;i<10;i++)
	{
	if(c<=s[0][i])
	{
		c=s[1][i];
		cout<<",("<<s[0][i]<<","<<s[1][i]<<")";
		}	
	}
}
