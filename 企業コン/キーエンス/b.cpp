#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,ans=0,end=-1e9;
    cin>>n;
    vector<int>x(n),l(n);
    vector<P>xL(n);
    rep(i,0,n){
        cin>>x[i]>>l[i];
    }
    //sort(xl.begin(),xl.end());
    For(i,n){
        xL[i].first=x[i]+l[i];
        xL[i].second=x[i]-l[i];
    }
    sort(xL.begin(),xL.end());
    For(i,n){
        if(end<=xL[i].second){
            ans++;end=xL[i].first;
        }
    }
    cout<<ans;
}
