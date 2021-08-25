#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

signed main()
{
    ll a, b;
    cin >> a >> b;
    ll g = gcd(a, b);
    ll c = a / g;
    ll BIG = 1000000000000000000LL;
    if (b<=BIG/c)
    {
        cout << c * b << endl;
    }
    else
    {
        cout << "Large" << endl;
    }
}