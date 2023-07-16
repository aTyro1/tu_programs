#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int a,b;
		cin>>s;
		a=s[0]-48;
		b=s[2]-48;
		cout<<a+b<<endl;
	}
	return 0;
}
