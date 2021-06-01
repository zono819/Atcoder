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
int n,k;
BIT bit(200010);
void query(vector<int>&a){
    for(int i=0;i<n;i++){
        bit.add(max(1,i-a[i]),1);
        bit.add(min(200001,i+a[i]+1),-1);
        a[i] = bit.sum(i)-bit.sum(1);
    }
}
signed main(){
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
        query(a);
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i!=n-1){cout<<' ';}
    }
    cout<<endl;
}