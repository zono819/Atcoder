#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)

string DIR[16]={"N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW"};
int wind[13]={327,285,245,208,172,139,108,80,55,34,16,3,0};

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int deg,dis;
    cin>>deg>>dis;
    int st = (int)(10.0*dis/60.0+0.5);
    int a = ((deg*10+1125)%36000)/2250;
    int w=12;
    rep(i,0,13){wind[i]-=1;}
    for(int i=12;i>=1;i--){
        if(wind[i]<st&&st<=wind[i-1]){w = 12-i;break;}
    }
    if(w==0){cout<<"C "<<w<<endl;}
    else{
        cout<<DIR[a]<<' '<<w<<endl;
        }
}