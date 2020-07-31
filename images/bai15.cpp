#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int N,S,M;
		cin>>N>>S>>M;
		int a=(M*S)/N;
		if(N*6<M*7 && S>6 || M>N) cout<<-1;
		else{
			if((M*S)%N!=0)
				a++;
			cout<<a; 
		}
		cout<<endl;
	}
}
