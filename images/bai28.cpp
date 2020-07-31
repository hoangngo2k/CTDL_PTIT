#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n; int a[n];
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		int x=n;
		for(int i=n/2;i>=1;i--)
			if(a[i]*2<=a[x]) x--;
		cout<<x<<endl;
	}
}

