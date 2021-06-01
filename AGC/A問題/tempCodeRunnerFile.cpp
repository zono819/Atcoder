#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod =1000000007;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a,b,c;
    cin>>a>>b>>c;
    if(b>=c){cout<<b+c;return 0;}
    else{cout<<b+min(a,c-b);}
}