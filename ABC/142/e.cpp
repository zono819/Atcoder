#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c,ans=0,m1,m2;
    cin>>n>>m;
    vector<int> key(n+1);
    for(int i=0;i<=n;i++){key[i]=100005;}
    key[0]=0;
    vector<int> a(m),b(m);
    for(int i=0;i<m;i++){
        cin>>a[i]>>b[i];
        for(int j=0;j<b[i];j++){
            cin>>c;
            if(a[i]/b[i]<key[i]){key[c]=min(a[i],key[c]);}
        }
    }
    for(int i=1;i<=n;i++){
        if(key[i]==100005){cout<<-1;return 0;}
        ans+=key[i];
    }
    cout<<ans;
}