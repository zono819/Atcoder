#include<bits/stdc++.h>
using namespace std;
signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int h,w,k,m=1,ux,lx,uy,ly;
    bool st;
    cin>>h>>w>>k;
    char p[h][w];
    int cake[h][w];
    bool b[h][w];
    memset(b,0,sizeof(b));
    memset(cake,0,sizeof(cake));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>p[i][j];
            if(p[i][j]=='#'){
                cake[i][j]=m;
                m++;
            }
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(p[i][j]=='#'){
                ux=i,lx=i,uy=j,ly=j;
                while(ux+1<h&&cake[ux+1][j]==0){cake[ux+1][j]=cake[i][j];ux++;}
                while(0<=lx-1&&cake[lx-1][j]==0){cake[lx-1][j]=cake[i][j];lx--;}
                while(0<=ly-1){
                    st=true;
                    for(int l=lx;l<=ux;l++){
                        if(cake[l][ly-1]){st=false;break;}
                    }
                    if(st){ly--;}
                    else{break;}
                }
                while(uy+1<w){
                    st=true;
                    for(int l=lx;l<=ux;l++){
                        if(cake[l][uy+1]){st=false;break;}
                    }
                    if(st){uy++;}
                    else{break;}
                }
                for(int l=lx;l<=ux;l++){
                    for(int c=ly;c<=uy;c++){
                        cake[l][c]=cake[i][j];
                        b[l][c]=1;
                    }
                }
            }
        }
    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<cake[i][j];
            if(j!=w-1){cout<<' ';}
        }
        cout<<endl;
    }
}