#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
long long poww(long long n, long long k)
{
	if(k==0) return 1;
	long long p=poww(n,k/2);
	if(k%2==0) return (p*p)%m;
	return (n*p*p)%m;
}
long long reverse(long long n)
{
	long long m=0;
	while(n){
		m=m*10+n%10;
		n/=10;
	}
	return m;
}
main()
{
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long m=reverse(n);
		cout<<poww(n,m)<<endl;
	}
}

