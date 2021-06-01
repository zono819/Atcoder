#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(a>b){swap(a,b);}
    if(a==0){return b;}
    else{return gcd(a,b%a);}
}
long long factor(long long n){
    long long ret=0;
    long long m=n;
    for(long long i=2;i*i<=n;i++){
        if(m%i==0){
            ret++;
                while(m%i==0){
                m/=i;
            }
        }
    }
    if(m!=1){ret++;}
    return ret;
}
int main(){
    long long a,b,ans=0;
    cin>>a>>b;
    long long g=gcd(a,b);
    cout<<factor(g)+1<<endl;
}