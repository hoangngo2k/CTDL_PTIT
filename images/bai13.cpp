#include <bits/stdc++.h>
using namespace std;
struct frequency{
    char c;
    int value;
};
int createFreq(frequency freq[],string s){
    int index=0;
    for(int i=0;i<s.size();i++){
        freq[index].c=s[i]; freq[index].value=1;
        for(int j=i+1;j<s.size();j++){
            if(s[j]==s[i]){
                freq[index].value++;
                s.erase(s.begin()+j); j--;
            }
        }
        index++;
    }
    return index;
}
void sortFreq(frequency freq[],int sizeFreq){
    for(int i=0;i<sizeFreq-1;i++)
        for(int j=i+1;j<sizeFreq;j++)
            if(freq[j].value>freq[i].value)
                swap(freq[i],freq[j]);
}
bool handle(frequency freq[], int sizeFreq,int sizeS,int d){
    bool visited[sizeS]={false};
    for(int i=0;i<sizeFreq;i++){
        int j=0;
        while(visited[j]) j++;
        if(j+(freq[i].value-1)*d>sizeS) return false;
        visited[j]=true;
    }
    return true;
}
main(){
    int t; cin>>t;
    while(t--){
        int d; string s; cin>>d>>s;
        int sizeS=s.size();
        frequency freq[26];
        int sizeFreq=createFreq(freq,s);
        sortFreq(freq,sizeFreq);
        cout<<(handle(freq,sizeFreq,sizeS,d)?1:-1)<<endl;
    }   
}
