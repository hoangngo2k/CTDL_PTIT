#include<iostream>
#include<string>
using namespace std;
string A,B;
int MIN()
{
	for(int i=0;i<A.length();i++)
		if(A[i]=='6')	A[i]='5';
	for(int i=0;i<B.length();i++)
		if(B[i]=='6')	B[i]='5';
	return stoi(A)+stoi(B);
}
int MAX()
{
	for(int i=0;i<A.length();i++)
		if(A[i]=='5')	A[i]='6';	
	for(int i=0;i<B.length();i++)
		if(B[i]=='5')	B[i]='6';
	return stoi(A)+stoi(B);
}
int main()
{
	cin>>A>>B;
	cout<<MIN()<<" "<<MAX();
}

