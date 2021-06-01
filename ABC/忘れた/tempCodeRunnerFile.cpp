#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0,high=0;
    cin>>n;
    vector<int> h(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    for(int i=0;i<n-1;i++){
        if(h[i]>h[i+1]){high++;ans=max(ans,high);}
        else{high=0;}
    }
    cout<<ans;
}
