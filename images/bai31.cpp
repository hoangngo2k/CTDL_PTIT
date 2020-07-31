#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
vector<vector<long long>> a;
long long n,k;
vector<vector<long long>> TichMatrix(vector<vector<long long>> x, vector<vector<long long>> y)
{
	vector<vector<long long>> b;b.resize(n);
	for(int i=0;i<n;i++){
		b[i].resize(n);
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
				b[i][j]=(b[i][j]+(x[i][k]*y[k][j])%m)%m;
	}
	return b;
}
vector<vector<long long>> mu(long long k)
{
	if(k==1) return a;
	vector<vector<long long>> x=mu(k/2);
	if(k%2==0) return TichMatrix(x,x);
	else return TichMatrix(TichMatrix(x,x),a);
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		a.resize(n);
		for(int i=0;i<n;i++){
			a[i].resize(n);
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		}
		vector<vector<long long>> result=mu(k);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				cout<<result[i][j]<<" ";
			cout<<endl;
		}
	}
}
