#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define all(s) s.begin(),s.end()

int b[2][3],c[3][2],sum;

int a[3][3];

pair<int,int> points(vector<int>&v){
    int tak = 0;
    int aoki = 0;
    rep(i,0,9){
        a[i/3][i%3] = v[i]%2;
    }
    rep(i,0,2){
        rep(j,0,3){
            if(a[i][j]==a[i+1][j]){tak+=b[i][j];}
            else{
                aoki+=b[i][j];
            }
        }
    }
    rep(i,0,3){
        rep(j,0,2){
            if(a[i][j]==a[i][j+1]){tak+=c[i][j];}
            else{
                aoki+=c[i][j];
            }
        }
    }
    return {tak,aoki};
}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    rep(i,0,2){
        rep(j,0,3){
            cin>>b[i][j];
            sum+=b[i][j];
        }
    }
    rep(i,0,3){
        rep(j,0,2){
            cin>>c[i][j];
            sum+=c[i][j];
        }
    }
    vector<int>v = {0,1,2,3,4,5,6,7,8};
    int m = 0;
    int M = 0;
    do{
        m = max(m,points(v).first);
        M = max(M,points(v).second);
    }while(next_permutation(all(v)));
    cout<<m<<endl;
    cout<<M<<endl;
}