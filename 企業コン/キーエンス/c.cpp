#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,k,s;
    cin>>n>>k>>s;
    if(n==k){
        For(i,n){
            cout<<s;
            if(i!=n-1){cout<<' ';}
        }
        return 0;
    }
    else if(n>k&&s>3){
        rep(i,0,k+1){
            if(i%2==0)cout<<1<<' ';
            else{cout<<s-1<<' ';}
        }
        rep(i,0,n-k-1){
            cout<<s-2;
            if(i!=n-k-2){cout<<' ';}
        }
        return 0;
    }
    else{
        rep(i,0,k){
            cout<<s<<' ';
        }
        rep(i,0,n-k){
            cout<<10000000;
            if(i!=n-k-1){
                cout<<' ';
            }
        }
        return 0;
    }
}
