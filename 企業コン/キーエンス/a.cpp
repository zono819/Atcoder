#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,ans,h,w;
    cin>>h>>w>>n;
    if(h>w){swap(h,w);}
    if(n%w==0)ans=n/w;
    else{ans=n/w+1;}
    cout<<ans;
}
