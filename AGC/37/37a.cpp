#include<bits/stdc++.h>
using namespace std;
int main(){
    int c=1,ans;
    string s;
    cin>>s;
    int n=s.size();
    ans=n;
    for(int i=1;i<n;i++){
        if(s.at(i)==s.at(i-1)){ans--;i+=2;}
    }
    cout<<ans;
}