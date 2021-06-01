#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,sum;
    sum=0;
    cin>>n;
    vector<int> a(n+1);
    vector<int> b;
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if((sum%2)!=a[1]){cout<<-1;return 0;}
    for(int i=1;i<=n;i++){
        int ai=0;
        for(int j=1;j*i<=n;j++){
            ai+=a[j*i];
        }
        if(a[i]){b.push_back(i);}
        if(a[i]!=ai%2){sum++;}
    }
    cout<<sum<<endl;
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<' ';
    }
}