#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
long long noiday(long long a[],long long n)
{
	priority_queue <long long, vector<long long>, greater<long long>> queue(a,a+n);
	long long result=0;
	while(queue.size()>1){
		long long first=queue.top(); queue.pop();
        long long second=queue.top(); queue.pop(); 
		result=result%m;
        result= result+ (first%m+second%m)%m; 
        result=result%m;
        queue.push((first%m+second%m)%m);
	}
	return result%m;
}
int main()
{
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<noiday(a,n);
}

