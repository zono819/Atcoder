#include<bits/stdc++.h>
using namespace std;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,a=-1,b=-1,m=0;
    cin>>n;
    vector<int> p(n),q(n),v(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    for(int i=0;i<n;i++){
        v[i]=i+1;
    }
    do {
        if(a==-1){
            bool bo=true;
            for(int j=0;j<n;j++){
                if(p[j]!=v[j]){bo=false;}
            }
            if(bo){a=m;}
        }
        if(b==-1){
            bool bi=true;
            for(int j=0;j<n;j++){
                if(q[j]!=v[j]){bi=false;}
            }
            if(bi){b=m;}
        }
        m++;
    }while(next_permutation(v.begin(),v.end()));
    cout<<abs(a-b)<<endl;
}