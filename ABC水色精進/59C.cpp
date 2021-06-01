#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,a) for(int i=n;i>=a;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
#define lla(s) s.rbegin(),s.rend()
#define pcnt(b) __builtin_popcount(b)
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<pair<int,int>>
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const ll INF = 1e18;


signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,sum[2]={0,0},ans[2]={0,0};
    cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    rep(j,0,2){
        int c = 0;
        rep(i,0,n){
            sum[j]+=a[i];
            if(j%2){
                if(i%2){
                    if(sum[j]<=0){
                        c +=abs(sum[j])+1;
                        sum[j]=1;
                    }
                }
                else{
                    if(sum[j]>=0){
                        c += abs(sum[j])+1;
                        sum[j]=-1;
                    }
                }
            }
            else{
                if(i%2==0){
                    if(sum[j]<=0){
                        c +=abs(sum[j])+1;
                        sum[j]=1;
                    }
                }
                else{
                    if(sum[j]>=0){
                        c += abs(sum[j])+1;
                        sum[j]=-1;
                    }
                }
            }
        }
        ans[j]=c;
    }
    std::cout<<min(ans[0],ans[1])<<endl;
}