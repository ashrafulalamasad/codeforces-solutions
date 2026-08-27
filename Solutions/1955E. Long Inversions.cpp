#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool can(ll n, const string& s, ll k){
    vector<ll> diff(n+1, 0); ll cur = 0;
    for(ll i = 0; i < n; i++){
        cur += diff[i];
        ll val = (s[i] - '0') ^ (cur & 1);
        if(val == 0){
            if(i + k > n) return false;
            cur++;
            if(i + k <= n) diff[i + k]--;
        }
    }
    return true;
}

int main()
{
    fast;
    tc{
        ll n, ans = 0; string s; cin >> n >> s;
        for(ll k = n; k >= 1; k--){
            if(can(n, s, k)){
                ans = k;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
