#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,x,ans=0,c=0;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(i==n-1&&x>a[i]){break;}
        else if(x>a[i]){x-=a[i];ans++;}
        else if(x==a[i]){ans++;break;}
        else{break;}
    }
    cout<<ans;
}