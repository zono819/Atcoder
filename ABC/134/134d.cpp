#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,sum1,ans;
    ans=0;
    sum1=0;
    cin>>n;
    vector<int> a(n+1);
    vector<int> b(n+1,0);
    vector<int> c;
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum1+=a[i];
    }
    if(sum1%2!=a[1]){cout<<-1; return 0;}
    for(int i=1;i<n;i++){
        for(int j=1;j*i<=n;j++){
            b[j*i]++;
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]==b[i]){ans++;c.push_back(i);}
    }
    cout<<ans<<endl;
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<' ';
    }
}