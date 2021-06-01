#include<bits/stdc++.h>
using namespace std;
#define MAX_N 100000

struct BIT{
    vector<int> data;

    BIT(int sz){
        data.assign(++sz,0);
    }
    int sum(int i){
        int s = 0;
        while(i > 0){
            s += data[i];
            i = i&(i-1);
        }
        return s;
    }

    //i=0でaddしてはいけない
    void add(int i,int x){
        while(i <= (int)data.size()){
            data[i] += x;
            i += i&-i;
        }
    }
};


signed main(){
    int n,a;
    cin>>n;
    BIT bit(n);
    for(int i=1;i<=n;i++){
        cin>>a;
        bit.add(i,a);
    }
    for(int i=1;i<=n;i++){
        cout<<bit.sum(i)<<endl;
    }
}