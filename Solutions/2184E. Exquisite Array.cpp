#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> p(n);
        for(ll i = 0; i < n; i++) cin >> p[i];
        vector<vector<ll>> byD(n);
        for(ll i = 0; i + 1 < n; i++) byD[abs(p[i + 1] - p[i])].push_back(i);
        vector<ll> ans(n, 0), leftRun(n, 0), rightRun(n, 0);
        vector<bool> active(n, false); ll total = 0;
        auto f = [&](ll x) -> ll { return x * (x + 1) / 2; };
        for(ll k = n - 1; k >= 1; k--){
            for(ll i : byD[k]){
                active[i] = true;
                ll l = i, r = i;
                if(i > 0 && active[i - 1]) l = leftRun[i - 1];
                if(i + 1 < n - 1 && active[i + 1]) r = rightRun[i + 1];
                ll a = i - l, b = r - i;
                total += f(a + b + 1) - f(a) - f(b);
                leftRun[i] = l;
                rightRun[i] = r;
                rightRun[l] = r;
                leftRun[r] = l;
            }
            ans[k] = total;
        }
        for(ll k = 1; k < n; k++){
            cout << ans[k];
            if(k < n - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
