#include<bits/stdc++.h>
using namespace std;

int ctoi(char c){
    return (int)(c-'0');
}


bool ineq(string n,string s){
    if(n.length()>s.length()){return true;}
    else if(n.length()<s.length()){return false;}
    else{
        int m=n.size();
        for(int i=0;i<m;i++){
            if(ctoi(n[i])<ctoi(s[i])){return false;}
        }
        return true;
    }
}


long long dfs(int nonzerocount,int k,string now,string s){
    long long ret=0;
    if(!ineq(s,now)){return 0;}
    if(nonzerocount>k){return 0;}
    else if(nonzerocount<k){
        for(int i=1;i<=9;i++){
            if(ineq(s,now+to_string(i))){
                ret+=dfs(nonzerocount+1,k,now+to_string(i),s);
                }
            }
            return ret;
        }
    else{
        if(ineq(s,now+to_string(0))){ret += dfs(k,k,now+to_string(0),s);return ret;}
        else{return ret;}
    }

}

signed main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string s;
    int k;
    cin>>s>>k;
    string start="";
    long long ans=dfs(0,k,start,s);
    cout<<ans<<endl;
}