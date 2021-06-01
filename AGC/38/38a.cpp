#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w,a,b;
    cin>>h>>w>>a>>b;
    int ans[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(i<b&&j<a){ans[i][j]=1;}
            else if(i>=b&&j>=a){ans[i][j]=1;}
            else{ans[i][j]=0;}
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}