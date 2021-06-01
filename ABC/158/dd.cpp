#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef pair<int,int> P;
typedef long long ll;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string s,c;
    int q,t,f,now=0;
    cin>>s>>q;
    rep(i,0,q){
        cin>>t;
        if(t==1){now = 1-now;}
        else if(t==2){
            cin>>f>>c;
            if((f==1&&now==0)||(f==2&&now==1)){s = c + s;}
            else{s = s + c;}
        }
    }
    if(now){
        rep(i,0,s.length()){
            cout<<s[s.length()-1-i];
        }
    }
    else{cout<<s;}
}