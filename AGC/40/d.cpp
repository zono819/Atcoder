#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
    if(a>b){swap(a,b);}
    if(a==0){return b;}
    else{return gcd(b%a,a);}
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n,a,b,ind=0,A,B,C,D,ai,bi,bunbo,bunsi,G,P,Q;
    cin>>n;
    vector<pair<int,int>> v(n);
    vector<int>ca(n+1),cb(n+1);
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v[i]=make_pair(a,-b);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        v[i].second*=-1;
    }
    ca[0]=0;
    cb[n]=0;
    for(int i=0;i<n;i++){
        ca[i+1]=v[i].first+ca[i];
        cb[n-i-1]=v[n-i-1].second+cb[n-i];
    }
    for(int i=1;i<n;i++){
        if(ca[i]==cb[i]){ind=i;A=ca[i];B=cb[i];break;}
        else if(ca[i]<cb[i]&&ca[i+1]>cb[i+1]){
            ind=i;
            A=ca[i];
            B=cb[i+1];
            break;
        }
    }
    ai=v[ind].first;
    bi=v[ind].second;
    if(A>B){
        C=bi*(ai+bi);
        D=bi*(bi-A+B);
    }
    else if(A<B){
        C=ai*(ai+bi);
        D=(ai-B+A)*bi;
    }
    else{
        C=ind;
        D=0;
    }
    bunsi=ind*C+D;
    bunbo=n*C;
    G=gcd(bunsi,bunbo);
    P=bunsi/G;
    Q=bunbo/G;
    cout<<P<<' '<<Q;
}