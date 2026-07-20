#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int MOD = 1e9 + 7;

int val(char c){
    if(c >= '0' && c <= '9') return c - '0';
    if(c >= 'A' && c <= 'Z') return c - 'A' + 10;
    if(c >= 'a' && c <= 'z') return c - 'a' + 36;
    if(c == '-') return 62;
    return 63;
}

ll power(ll b, ll e){
    ll r = 1;
    while(e > 0){
        if(e & 1) r = r * b % MOD;
        b = b * b % MOD;
        e /= 2;
    }
    return r % MOD;
}

int main()
{
    fast;
    string s; cin >> s;
    ll zeros = 0;
    for(ll i = 0; i < (ll)s.size(); i++){
        ll v = val(s[i]);
        for(ll b = 0; b < 6; b++){
            if(!(v & (1 << b))) zeros++;
        }
    }
    cout << power(3, zeros) << endl;
    return 0;
}
