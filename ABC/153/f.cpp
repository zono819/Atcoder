#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,d,a,x,h,c=0;
    cin>>n>>d>>a;
    vector<int> x(n),h(n);
    vector<P> xh(n);
    for(int i=0;i<n;i++){
        cin>>x>>h;
        xh[i].first=x;
        xh[i].second=h;
    }
    sort(xh.begin(),xh.end());
    while(xh[c].first-xh[0].first<=d){c++;}
}