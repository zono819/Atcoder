#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n,first=1,last=1,f=0;
    long long ans=0,c=1,conti=0,k;
    cin>>s>>k;
    n=s.size();
    if(n==1){cout<<k/2; return 0;}
    else if(s[0]!=s[n-1]){
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){c++;}
            else{conti+=c/2;c=1;}
        }
        ans+=conti*k;
        ans+=c/2*k;
        cout<<ans;
        return 0;
    }
    else{
        int ind=0,IND=n-1;
        while(ind<IND&&s[ind]==s[ind+1]){
            first++;
            ind++;
        }
        while(s[IND]==s[IND-1]&&IND>ind){
            last++;
            IND--;
        }
        if(first==n){cout<<n*k/2;return 0;}
        for(int i=ind;i<IND;i++){
            if(s[i]==s[i+1]){c++;}
            else{conti+=c/2;c=1;}
        }
        ans+=conti*k;
        ans+=first/2+(first+last)/2*(k-1)+last/2;
        cout<<ans;
    }
}