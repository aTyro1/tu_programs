#include<bits/stdc++.h>
using namespace std;
int combine(int*,int,int,int);
int max_of_sum(int,int,int);
int max_sum(int *a,int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		cout<<l<<" "<<mid<<" "<<r<<endl;
		int left_sum=max_sum(a,l,mid);
		int right_sum=max_sum(a,mid+1,r);
		int overlap_sum=combine(a,l,mid,r);
		return max_of_sum(left_sum,right_sum,overlap_sum);
	}
	else
		return a[l];
}
int combine(int *a,int l,int mid,int r)
{
	int max_sum=0;
	int i=l;
	cout<<l<<" "<<mid<<" "<<r<<endl;
	int temp=mid-1;
	while(temp>=l)
	{
		if(max_sum+a[temp]>max_sum)
			max_sum+=a[temp];
		else
			break;
		temp--;
	}
	while(mid<=r)
	{
		if(max_sum+a[mid] >max_sum)
			max_sum+=a[mid];
		else
			break;
		mid++;
	}
	return max_sum;
}
int max_of_sum(int a,int b,int c)
{
	int max=0;
	if(a>b)
	{
		if(a>c)
		max=a;
		else
		max=c;
	}
	else
	{
		if(b>c)
		max=b;
		else
		max=c;
	}
	return max;
}	
int main()
{
	int a[]={0,2,4,6,-10,-11,4,-6,2,1};
	cout<<max_sum(a,0,9)<<endl;
	return 0;
}
