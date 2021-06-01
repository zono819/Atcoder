#include<bits/stdc++.h>
using namespace std;
map<int,int> div;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int m,n,d;
    cin>>n>>m;
    for(int i=2;i*i<=m;i++){
        if(m%i==0){
            div[i]=m/i;
        }
    }
    for(auto it:div){
        if((*it).first>=n){d=(*it).first;break;}
    }
    cout<<m/d;
}
