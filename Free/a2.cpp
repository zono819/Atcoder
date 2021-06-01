#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,ac=0,bc=0,cc=0,ans=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        m=s.size();
        if(s[0]=='B'&&s[m-1]=='A'){cc++;}
        else if(s[0]=='B'){bc++;}
        else if(s[m-1]=='A'){ac++;}
        
        
        for(int j=0;j<m-1;j++){
            if(s[j]=='A'&&s[j+1]=='B'){ans++;}
        }
    }
    if(cc==0){cout<<ans+min(ac,bc);return 0;}
    else if(bc+ac>0){cout<<ans+cc+min(ac,bc);return 0;}
    else{cout<<ans+cc-1;return 0;}
}