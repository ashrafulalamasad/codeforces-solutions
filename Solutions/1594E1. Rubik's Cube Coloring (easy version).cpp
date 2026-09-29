#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll mod = 1000000007;
    ll k; cin >> k;
    ll exponent = (1LL << k) - 2;
    ll answer = 1, base = 4;
    while(exponent > 0){
        if(exponent % 2 == 1) answer = answer * base % mod;
        base = base * base % mod;
        exponent /= 2;
    }
    cout << 6 * answer % mod << endl;
    return 0;
}
