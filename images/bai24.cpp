#include<bits/stdc++.h>
using namespace std;
long long mu(long long n, long long k)
{
	if(k==0) return 1;
	long long x=mu(n,k/2);
	if(k%2==0) return (x*x)%123456789;
	return (n*x*x)%123456789;
}
int main()
{
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<mu(2,n-1)%123456789<<endl;
	}
}

