#include<bits/stdc++.h>
using namespace std;
long long changeArray(int n,long long k)
{
	if(k%2==1) return 1;
	long long x=pow(2,n-1);
	if(x==k) return n;
	if(x>k) return changeArray(n-1,k);
	return changeArray(n-1,k-x);
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n;long long k; cin>>n>>k;
		cout<<changeArray(n,k)<<endl;
	}
}
