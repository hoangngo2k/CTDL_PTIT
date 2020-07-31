#include<bits/stdc++.h>
using namespace std;
int tach(int n)
{
	int t=0;
	while(n>0){
		int m=n%10;
		if(m==4 || m==7)
			t+=m;
		else
			break;
		n/=10;
	}
	return t;
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n,check=0,a;
		cin>>n;
		for(int i=1;i<100000;i++){
			if(tach(i)!=n){
				check=0;
			}
			else{
				check++; a=i;
				break;
			}
		}
		if(check==1) cout<<a;
		else cout<<-1;
		cout<<endl;
	}
}

