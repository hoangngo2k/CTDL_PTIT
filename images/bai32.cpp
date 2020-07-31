#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long long a[n];
		int count=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				if(a[i]>a[j] && i<j) count++;
		cout<<count<<endl;
	}
}

