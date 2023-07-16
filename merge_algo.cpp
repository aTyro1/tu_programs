#include<bits/stdc++.h>
using namespace std;
int* merge(vector<int>& nums1,vector<int>& nums2)
{
	int m,n,*combined,j,i,curr,k;
	m=nums1.size();
	n=nums2.size();
	combined=new int[m+n];
	i=0;
	j=0;
	k=0;
	while(i<n && j<m)
	{
		curr=nums1[i];
		while(nums2[j]<curr)
		{
			combined[k++]=nums2[j];
			j++;
		}
		combined[k++]=curr;
		i++;
	}
	return combined;
}
int main()
{
	vector<int> nums1,nums2;
	nums1.push_back(4);
	nums1.push_back(8);
	nums2.push_back(5);
	nums2.push_back(7);
	int *ans=merge(nums1,nums2);
	int i=0;
	while(i<4)
	{
		cout<<ans[i++]<<" ";
	}
	cout<<endl;
	return 0;
}
