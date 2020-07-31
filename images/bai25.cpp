#include<bits/stdc++.h>
using namespace std;
long long a[100];
char locationFibo(int n, long long k)
{
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=a[n-2]) return locationFibo(n-2,k);
	return locationFibo(n-1,k-a[n-2]);
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		a[1]=1;a[2]=1;
		for(int i=3;i<=92;i++) a[i]=a[i-1]+a[i-2];
		cout<<locationFibo(n,k)<<endl;
	}
}
