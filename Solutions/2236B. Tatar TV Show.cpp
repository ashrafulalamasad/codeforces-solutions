#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, ok = 1; cin >> n >> k;
        string s; cin >> s; vector<ll> cnt(k, 0);
        for(ll i = 0; i < n; i++){
            cnt[i % k] = cnt[i % k] + (s[i] - '0');
        }
        for(ll r = 0; r < k; r++){
            if(cnt[r] % 2 == 1){
                ok = 0;
            }
        }
        if(ok){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
