#include <bits/stdc++.h>
using namespace std;
int a[100],n;
long long sum;
int tong(int a[], int n)
{
	sum=0;
	for(int i=1;i<n;i++)
		sum+=a[i]*i;
	return sum%1000000007;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		tong(a,n);
		cout<<endl;
	}
}
