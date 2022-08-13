//Dijkstra O(|E|log|V |)
#include <cstdio>
#include <cstring>
#include <functional>
#include <queue>
#include <utility>
#include <vector>
#include<bits/stdc++.h>
using namespace std; 
//--------Cut here---------------------------
typedef pair<int,int> P;
#define MAX_V 200005 
#define INF 2000000000 
int V;
int d[MAX_V];
struct edge{int to,cost;};
vector<edge> graph[MAX_V];
void dijkstra(int s)
{
    fill(d,d+V,INF);
    d[s]=0;
    priority_queue<P,vector<P>,greater<P> > q;
    q.push(make_pair(0,s));//(distance,index)
    while(!q.empty())
    {
        P a=q.top();
        q.pop();
        if(d[a.second]<a.first)continue;
        for(int i=0;i<graph[a.second].size();i++)
        {
            edge e=graph[a.second][i];
            if(d[e.to]>d[a.second]+e.cost)
            {
                d[e.to]=d[a.second]+e.cost;
                q.push(make_pair(d[e.to],e.to));
            }
        }
    }
    return;
}
//---------Cut here--------------------
int main(){
    int s;
    scanf("%d",&s);
    dijkstra(s);
    for(int i=0;i<V;i++)printf("%d\n",d[i]);
    return 0;
}