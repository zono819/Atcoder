#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string s,front,back;
    char c;
    int q,t,f,now=0;
    cin>>s>>q;
    rep(i,0,q){
        cin>>t;
        if(t==1){now = 1-now;}
        else{
            cin>>f>>c;
            if((f-now)%2==1){front = c + front;}
            else{back = back + c;}
        }
    }
    s = front + s + back;
    if(now){
        reverse(s.begin(),s.end());
    }
    cout<<s;
}
