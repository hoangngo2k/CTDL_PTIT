#include<bits/stdc++.h>
using namespace std;
int noiday(int a[],int n)
{
	priority_queue <int,vector<int>,greater<int>> queue(a,a+n);
	int OTP=0;
	while(queue.size()>1){
		int first=queue.top();queue.pop();
		int second=queue.top();queue.pop();
		OTP+=first+second;
		queue.push(first+second);
	}
	return OTP;
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<noiday(a,n)<<endl;
	}
}

