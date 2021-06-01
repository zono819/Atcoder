#include<bits/stdc++.h>
using namespace std;

struct edge{int to, cap, rev;};
const int INF = 1e9;
const int MAX_V = 200000;
vector<edge>G[MAX_V];
int level[MAX_V];
int iter[MAX_V];

void add_edge(int from,int to, int cap){
    G[from].push_back((edge){to,cap,(int)G[to].size()});
    G[to].push_back((edge){from,0,(int)G[from].size()-1});
}

int main(){
    
}