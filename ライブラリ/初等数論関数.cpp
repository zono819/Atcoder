#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> P;
typedef long long ll;
#define rep(i,a,n) for(int i=a;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)
#define all(s) s.begin(),s.end()
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;

int gcd(int a,int b){
    a = abs(a),b = abs(b);
    if(a>b){swap(a,b);}
    if(a==0){return b;}
    else{return gcd(b%a,a);}
}

int lcm(int a,int b){
    int ret = a/gcd(a,b)*b;
    return ret;
}

//繰り返し二乗法
int pw(int a, int x) {
    if (x == 0) return 1;
    int b = pw(a, x / 2);
    b = (b * b) % MOD;
    if (x % 2)
        return (a * b) % MOD;
    return b;
}

map<int,int> pf(int N){
    map<int,int> ret;
    for(int i=2;i*i<=N;i++){
        while(N%i==0){
            ret[i]++;
            N/=i;
        }
    }
    if(N!=1){ret[N]++;}
    return ret;
}

vector<int> divisors(int n){
    vector<int> ret;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ret.push_back(i);
            if(i*i!=n){ret.push_back(n/i);}
            }
    }
    sort(ret.begin(),ret.end());//optional
    return ret;
}

int totient(int n){
    int tmp = n;
    map<int,int>pf;
    for(int i=2;i*i<=tmp;i++){
        if(tmp%i==0){
            while(tmp%i==0){
                pf[i]++;
                tmp/=i;
            }
        }
    }
    if(tmp!=1){pf[tmp]++;}
    for(auto p:pf){
        n = n/(p.first)*(p.first-1);
    }
    return n;
}

int numofDivs(int n){
    map<int,int> pf;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            pf[i]++;
            n/=i;
        }
    }
    if(n!=1){pf[n]++;}
    int ret = 1;
    for(auto p:pf){
        ret*=(p.second+1);
    }
    return ret;
}

bool isAmicable(int n){
    vector<int>d;
    int s = 0;
    for(int i = 1;i * i <= n;i++){
        if(n%i==0){
            d.push_back(i);
            if(i*i!=n&&i!=1){d.push_back(n/i);}
            }
    }
    for(int i = 0; i < (int)d.size();i++){
        s+=d[i];
    }
    for(int i = 1;i * i <= s;i++){
        if(s%i==0){
            n-=i;
            if(i*i!=s&&i!=1){
                n-=s/i;
            }
        }
    }
    return (n==0);
}
int fib[100000];
void fibinit(){
    fib[0]=1;fib[1]=1;
    rep(i,2,100000){
        fib[i] = fib[i-1] + fib[i-2];
    }
}
int sumofDivs(int n){
    if(n==1){return 1;}
    int ret = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ret+=i;
            if(i*i!=n){ret+=n/i;}
            }
    }
    return ret;
}
bool isPrime[1000000]={};
void primeinit(){
    for(int i=0;i<1000000;i++){
        isPrime[i]=true;
    }
    isPrime[0] = 0;isPrime[1] = 0;
    for(int i=2;i<1000000;i++){
        if(isPrime[i]){
            for(int j=i+i;j<1000000;j+=i){
                isPrime[j]=false;
                }
        }
    }
}


int main(){
    int n;
    cin>>n;
    map<int,int> p = pf(n);
    for(auto it : p){
        cout<<it.first<<' '<<it.second<<endl;
    }
}