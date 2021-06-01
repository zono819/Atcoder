#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    double a,b,x,tan,pi=3.141592653589793238462643383279;
    cin>>a>>b>>x;
    if((a*a*b)/2<x){tan=(2*b-(2*x/(a*a)))/a;}
    else{tan=(a*b*b)/(2*x);}
    cout<<std::setprecision(8)<<180*atan(tan)/pi;
}
