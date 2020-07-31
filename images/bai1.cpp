#include<iostream>
using namespace std;
int a[10]={1,2,5,10,20,50,100,200,500,1000},ans[20],money,dem;
void greedy(int value, int coins[], int ans[], int n) 
{
	dem=0;
    for ( int i = n - 1; i >= 0; --i ) {
    	int j=0;
        ans[j] = 0;
        while ( coins[i] <= value && j<n ) {
            value -= coins[i];
            ans[j]++; 
		}
		if(ans[j]!=0)
			dem++;
    }
    cout<<dem;
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>money;
		greedy(money,a,ans,10);
		cout<<endl;
	}
}
