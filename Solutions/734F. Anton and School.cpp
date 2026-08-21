#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> b(n), d(n);
    for(ll i = 0; i < n; i++) cin >> b[i];
    ll sumD = 0;
    for(ll i = 0; i < n; i++){
        ll c; cin >> c;
        d[i] = b[i] + c;
        sumD += d[i];
    }
    ll denom = 2 * n;
    if(sumD % denom != 0){
        cout << -1 << endl;
        return 0;
    }
    ll sumA = sumD / denom;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        ll val = d[i] - sumA;
        if(val < 0 || val % n != 0){
            cout << -1 << endl;
            return 0;
        }
        a[i] = val / n;
    }
    const ll BITS = 63;
    vector<ll> cnt(BITS, 0);
    for(ll i = 0; i < n; i++){
        for(ll k = 0; k < BITS; k++){
            if(a[i] & (1LL << k)){
                cnt[k]++;
            }
        }
    }
    for(ll i = 0; i < n; i++){
        ll calc = 0;
        bool bad = false;
        for(ll k = 0; k < BITS; k++){
            if(a[i] & (1LL << k)){
                ll bit = 1LL << k;
                ll count = cnt[k];
                if(count == 0){
                    continue;
                }
                if(calc > b[i] || bit > (b[i] - calc) / count){
                    bad = true;
                    break;
                }
                calc += bit * count;
            }
        }
        if(bad || calc != b[i]){
            cout << -1 << endl;
            return 0;
        }
    }
    for(ll i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
