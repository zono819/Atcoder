#include<bits/stdc++.h>
using namespace std;
bool fr[10][10];
bool F[10];
int main(){
    int n,m,a,b;
    cin>>n>>m;
    vector<int> ans(n,0);
    for(int i=0;i<m;i++){
        cin>>a>>b;
        a--;b--;
        fr[a][b]=1;
        fr[b][a]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            F[j]=0;
        }
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(fr[i][j]&&(!fr[i][k])&&fr[k][j]){F[k]=1;}
            }
        }
        for(int j=0;j<n;j++){
            ans[i]+=F[j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<max(0,(ans[i]-1))<<endl;
    }
}