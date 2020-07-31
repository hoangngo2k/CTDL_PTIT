#include<bits/stdc++.h>
using namespace std;
long long noiday(int a[],int n)
{
	priority_queue <int, vector<int>, greater<int>> queue(a,a+n);
	long long OPT=0;
	while(queue.size()>1){
		int first=queue.top();queue.pop();
		int second=queue.top();queue.pop();
		OPT+=first+second;
		queue.push(first+second);
	}
	return OPT;
}
int main()
{
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<noiday(a,n)<<endl;
	}
}

