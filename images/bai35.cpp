#include<bits/stdc++.h>
using namespace std;
int search_bin(int a[], int left, int right, int mid)
{
	int sum=0,max1=INT_MIN,max2=INT_MIN;
	
	for(int i=mid;i>=left;i--){
		sum+=a[i];
		if(max1<sum)
			max1=sum;
	}
	sum=0;
	for(int i=mid+1;i<=right;i++){
		sum+=a[i];
		if(max2<sum)
			max2=sum;
	}
	return max(max(max1,max2),max1+max2);
}
int bin(int a[],int left, int right)
{
	if(left==right) return a[left];
	int mid=(left+right)/2;
	return max(max(bin(a,left,mid),bin(a,mid+1,right)),search_bin(a,left,right,mid));
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<bin(a,0,n-1)<<endl;
	}
}

