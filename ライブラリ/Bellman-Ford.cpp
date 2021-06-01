#include<bits/stdc++.h>
using namespace std;

//入力忘れず
const int MAX_E = 100010;
const int MAX_V = 3000;
const int INF=1000000000;
struct edge{int from,to,cost;};
edge es[MAX_E];
int d[MAX_V];
int V,E;


void BellmanFord(int s){
    for(int i=0;i<V;i++){
        d[i]=INF;
    }
    d[s]=0;
    while(1){
        bool update = true;
        for(int i=0;i<E;i++){
            edge e=es[i];
            if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost){
                d[e.to]=d[e.from]+e.cost;
                update=true;
            }
        }
        if(!update){break;}
    }
}

bool find_negativeroop(){
    memset(d,0,sizeof(d));
    for(int i=0;i<V;i++){
        for(int j=0;j<E;j++){
            edge e=es[j];
            if(d[e.to]>d[e.from]+e.cost){
                d[e.to]=d[e.from]+e.cost;
                if(i==V-1){return true;}
            }
        }
    }
    return false;
}

signed main(){
    cin>>V>>E;
    int from,to,cost;
    for(int i=0;i<E;i++){
        cin>>from>>to>>cost;
        //from--; to--; //ここは必要なら
        es[i]={from,to,cost};
    }
    cout<<find_negativeroop();
    //BellmanFord(0);
}