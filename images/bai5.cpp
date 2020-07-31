#include<bits/stdc++.h>
using namespace std;
int a[50],n,k;
int b,c;
int max(int a[],int n)
{
	if(n>=2*k){
		sort(a,a+n);
		for(int i=0;i<k;i++)
			b+=a[i];
		for(int i=k;i<n;i++)
			c+=a[i];
		}
	else{
		sort(a,a+n,greater<int>());
		for(int i=0;i<k;i++)
			b+=a[i];
		for(int i=k;i<n;i++)
			c+=a[i];
	}
	if(c>b)
		return c-b;
	else{
		return b-c;
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		c=0,b=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<max(a,n)<<endl;
	}
}

