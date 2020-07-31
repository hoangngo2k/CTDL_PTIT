#include<bits/stdc++.h>
using namespace std;
void Input(int a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i];
}
int main()
{
	int t;cin>>t;
	while(t--){
		int a[50],b[50],n,sum=0;
		cin>>n;
		Input(a,n);
		Input(b,n);
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		for(int i=0;i<n;i++)
			sum+=a[i]*b[i];
		cout<<sum;
	}
}

