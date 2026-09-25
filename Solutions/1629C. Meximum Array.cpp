#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m = 0, i = 0; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<ll> cnt(n + 2, 0), suf(n + 1, 0);
        for(ll i = n - 1; i >= 0; i--){
            cnt[a[i]] = 1;
            while(cnt[m]) m++;
            suf[i] = m;
        }
        vector<ll> seen(n + 2, 0), touched, ans;
        while(i < n){
            ll M = suf[i], lm = 0, j = i;
            do{
                if(!seen[a[j]]){
                    seen[a[j]] = 1;
                    touched.push_back(a[j]);
                }
                while(seen[lm]) lm++;
                j++;
            }while(lm < M);
            ans.push_back(M);
            for(ll x : touched) seen[x] = 0;
            touched.clear(); i = j;
        }
        cout << ans.size() << endl;
        for(ll x : ans) cout << x << " ";
        cout << endl;
    }
    return 0;
}
