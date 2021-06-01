#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){cout<<"NO"<<endl;return 0;}
    }
    cout<<"YES";return 0;
}