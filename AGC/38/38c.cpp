#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a<b){swap(a,b);}
    if(b==0){return a;}
    return gcd(a%b,b);
}
const long MOD=998234343;
int main(){
    int n;
    long long ans;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

}