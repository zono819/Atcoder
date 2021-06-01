#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,c=0;
  long ans=0;
  cin>>n;
  vector<int> a(n+1);
  vector<int> b(n);
  for(int i=0;i<n+1;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    cin>>b[i];
  }
  for(int i=0;i<n;i++){
    ans+=min(a[i],b[i]+c);
    c=max(0,b[i]+c-a[i]);
  }
  cout<<ans+min(c,a[n]);
}
/*
#include <iostream>
using namespace std;

int n;
long a[100010], b, c, t;

int main(){
	cin >> n;
	for (int i = 0; i < n+1; ++i) cin >> a[i];
	c = 0;
	for (int i = 0; i < n; ++i){
		cin >> b;
		t = min(b, a[i] + a[i+1]);
		c += t;
		a[i+1] -= t - min(b, a[i]);
	}
	cout << c;
}


*/