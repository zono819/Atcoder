#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string s;
    cin>>s;
    int n=s.length();
    long long ans=0;
    int N=1<<(n-1);
    for(int i=0;i<N;i++){
        long long bi=0;
        long long c = s[0]-'0';
        for(int j=1;j<n;j++){
            if(i&(1<<j-1)){
                bi+=c;
                c=0;
            }
            c*=10;
            c+=s[j]-'0';
        }
        ans+=bi+c;
    }
    cout<<ans;
}