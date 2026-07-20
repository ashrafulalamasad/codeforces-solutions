#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> a(n);
        for(ll idx = 0; idx < n; idx++) cin >> a[idx];
        vector<ll> c;
        ll p = 0;
        while(p < n){
            ll q = p;
            while(q < n && a[q] == a[p]) q++;
            c.push_back(q - p);
            p = q;
        }
        ll m = c.size();
        ll maxc = 0;
        for(ll idx = 0; idx < m; idx++) maxc = max(maxc, c[idx]);
        vector<ll> freqCnt(maxc + 2, 0), freqSum(maxc + 2, 0);
        for(ll idx = 0; idx < m; idx++){
            freqCnt[c[idx]]++;
            freqSum[c[idx]] += c[idx];
        }
        vector<ll> sufCnt(maxc + 2, 0), sufSum(maxc + 2, 0);
        for(ll L = maxc; L >= 1; L--){
            sufCnt[L] = sufCnt[L+1] + freqCnt[L];
            sufSum[L] = sufSum[L+1] + freqSum[L];
        }
        ll ans = 0;
        for(ll L = 1; L <= maxc; L++){
            if(freqCnt[L] > 0){
                ll cnt = sufCnt[L];
                ll S = sufSum[L];
                ll numerator = k - S;
                if(numerator % cnt == 0){
                    ll x = numerator / cnt;
                    if(x >= -(L - 1)) ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
