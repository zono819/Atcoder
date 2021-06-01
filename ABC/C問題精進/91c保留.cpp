#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y,a,b,c,d,ans=0;cin>>n;
    typedef pair<int,int> P;
    vector<P> red(n),blue(n);
    for(int i=0;i<n;i++){cin>>x>>y;red[i].first=y;red[i].second=x;}
    for(int i=0;i<n;i++){cin>>x>>y;blue[i].first=x;blue[i].second=y;}
    sort(red.begin(),red.end());
    reverse(red.begin(),red.end());
    sort(blue.begin(),blue.end());
    for(int i=0;i<n;i++){
        c=blue[i].first;d=blue[i].second;
        for(int j=0;j<n;j++){
            b=red[j].second;a=red[j].first;
            if(a<c&&b<d){ans++;red[j].first=2*n;red[j].second=2*n;break;}
        }
    }
    cout<<ans;
}