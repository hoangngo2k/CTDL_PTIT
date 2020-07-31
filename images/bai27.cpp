#include<bits/stdc++.h>
using namespace std;
int dembit(int n,int l,int r)
{
	if(l/2>1) return dembit(n/2,l/2,r/2);
	else{
		if(l%2==1) return n/2;
		if(l%2==0) return n/2+1;
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n,l,r;
		cin>>n>>l>>r;
		cout<<dembit(n,l,r)<<endl;
	}
}

