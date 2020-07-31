#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
long long mu(long long n, long long k)
{
	if(k==0) return 1;
	long long x=mu(n,k/2)%m;
	if(k%2==0) return x%m*x%m;
	return n%m*x%m*x%m;
}
int main()
{
	int t;cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		cout<<mu(n,k)<<endl;;
	}
}
