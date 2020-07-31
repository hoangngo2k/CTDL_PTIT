#include<bits/stdc++.h>
using namespace std;
int tach(int n)
{
	int t=0;
	while(n>0){
		t+=n%10;
		n/=10;
	}
	return t;
}
int main()
{
	int t;cin>>t;
	while(t--){
		int S,D;
		cin>>S>>D;
		for(int i=pow(10,D-1);i<pow(10,D)-1;i++)
			if(S==tach(i)){
				cout<<i;
				break;
			}
		cout<<endl;
	}
}

