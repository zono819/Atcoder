#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
    int n;
    cin>>n;
    string t;
    int s[n][n];
    rep(i,n){
        cin>>t;
        rep(j,n){
            if(t[j]=='0'){s[i][j]=0;}
            else{s[i][j]=1;}
        }
    }
}