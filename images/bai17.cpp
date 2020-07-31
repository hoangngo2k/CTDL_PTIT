#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int K;
		string S;
		cin>>K>>S;
		int n=S.length();
		int count[n],a[n],check=0;
		for(int i=0;i<n;i++)
			if(S[i]>=65 && S[i]<=90)	S[i]+=32;
		for(int i=0;i<n;i++)	count[i]=0;
		for(int i=0;i<n;i++)
			count[S[i]-97]++;
		for(int i=0;i<n;i++)
			if(S[i]!=S[i+1])
				check++;
		int dem=0;
		for(int i=0;i<n;i++)
			if(count[i]){
				a[i]=count[i];
				dem++;
			}
		sort(a,a+dem,greater<int>());
		int x=n-K;
		for(int i=0;i<dem;i++){
			if(a[i]<x){
				a[i]=x-a[i];
				if(a[i]<a[i+1]) break;
				if(a[i]==a[i+1]){
					a[i+1]-=1;
					x=0;
				}
			}
			else{
				x=a[i]-x;a[i]=1;
			}
			if(a[i]==x){
				a[i]=1;x=1;
			}
		}
		int sum=0;
		for(int i=0;i<dem;i++)
			sum+=a[i]*a[i];
		if(check==n) cout<<n-K;
		else cout<<sum<<endl;
	}
}
