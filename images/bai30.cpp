#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
vector<vector<long long>> a={{1,1},{1,0}};
vector<vector<long long>> TichMatrix(vector<vector<long long>> x,vector<vector<long long>> y)
{
	vector<vector<long long>> b={{0,0},{0,0}};
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			for(int k=0;k<2;k++)
				b[i][j]=(b[i][j]+(x[i][k]*y[k][j])%m)%m;
	return b;
}
vector<vector<long long>> mu(long long n)
{
	if(n==1) return a;
	vector<vector<long long>> x=mu(n/2);
	if(n%2==0) return TichMatrix(x,x);
	else return TichMatrix(TichMatrix(x,x),a);
}
int main()
{
	int t,n; cin>>t;
	while(t--){
		cin>>n;
		vector<vector<long long>> result=mu(n);
		cout<<result[0][1]<<endl;
	}
}

