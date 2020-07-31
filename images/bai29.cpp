#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n; cin>>t;
	while(t--){
		cin>>n;
		int x[n],y[n],a[n*n];
		for(int i=0;i<n;i++)
			cin>>x[i]>>y[i];
		int count=0;
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				a[count++]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
		double t=a[0];
			for(int i=1;i<count;i++)
				if(t>a[i]) t=a[i];
		cout<<sqrt(t)<<endl;
	}
}

