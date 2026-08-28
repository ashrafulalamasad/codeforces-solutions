#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll k, prod = 1, i = 0; cin >> k;
    string base = "codeforces";
    vector<ll> c(10, 1);
    while(prod < k){
        prod = prod / c[i] * (c[i] + 1);
        c[i]++;
        i = (i + 1) % 10;
    }
    for(ll j = 0; j < 10; j++){
        for(ll r = 0; r < c[j]; r++) cout << base[j];
    }
    cout << endl;
    return 0;
}
