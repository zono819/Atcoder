#include<bits/stdc++.h>
using namespace std;
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin>>s;
    int n=s.size();
    if(n<26){
        vector<int>c(26);
        for(int i=0;i<n;i++){
            c[(int)(s[i]-'a')]++;
        }
        int m;
        for(int i=0;i<26;i++){
            if(c[i]==0){m=i;break;}
        }
        cout<<s<<(char)(m+'a')<<endl;
        return 0;
    }
    else{
        int inc=n;
        for(int i=n-1;i>=1;i--){
            if(s[i-1]<s[i]){inc=i-1;break;}
        }
        if(inc==n){cout<<-1;return 0;}
        vector<int>c(26);
        string t=s.substr(0,inc);
        for(int i=0;i<t.size();i++){
            c[(int)(t[i]-'a')]++;
        }
        int m;
        for(int i=0;i<26;i++){
            char C=(int)('a'+i);
            int N=t.size();
            if(c[i]==0&&C>s[N]){m=i;break;}
        }
        cout<<t<<(char)(m+'a')<<endl;return 0;
    }
}