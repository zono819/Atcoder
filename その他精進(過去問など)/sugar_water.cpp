#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,f,answ=1,anss=0;
    cin>>a>>b>>c>>d>>e>>f;
    for(int i=0;i*100*a<=f;i++){
        for(int j=0;j*100*b+i*100*a<=f;j++){
            int w=j*100*b+i*100*a;
            for(int k=0;k*c+w<=f;k++){
                for(int l=0;w+k*c+l*d<=f;l++){
                    int s=k*c+l*d;
                    if(anss*(s+w)<answ*s&&(100+e)*s<=e*(s+w)){answ=s+w;anss=s;}
                }
            }
        }
    }
    if(answ==1){
        for(int i=0;i*a*100<=f;i++){
            for(int j=0;i*100*a+j*b*100<=f;j++){
                answ=max(answ,i*100*a+j*b*100);
            }
        }
    }
    cout<<answ<<' '<<anss;
}