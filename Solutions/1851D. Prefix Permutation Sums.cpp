#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n - 1);
        for(ll i = 0; i < n - 1; i++) cin >> a[i];
        ll sum = n * (n + 1) / 2;
        if(a[n - 2] > sum) cout << "NO" << endl;
        else{
            vector<ll> seen(n + 1, 0), bad;
            for(ll i = 0; i < n - 1; i++){
                ll d = a[i] - (i > 0 ? a[i - 1] : 0);
                if(d >= 1 && d <= n && seen[d] == 0) seen[d] = 1;
                else bad.push_back(d);
            }
            if(a[n - 2] == sum){
                if(bad.size() == 1){
                    ll s = 0, cnt = 0;
                    for(ll v = 1; v <= n; v++) if(seen[v] == 0){
                        s += v; cnt++;
                    }
                    if(cnt == 2 && s == bad[0]) cout << "YES" << endl;
                    else cout << "NO" << endl;
                }else cout << "NO" << endl;
            }else{
                if(bad.size() == 0){
                    ll need = sum - a[n - 2];
                    if(need >= 1 && need <= n && seen[need] == 0) cout << "YES" << endl;
                    else cout << "NO" << endl;
                }else cout << "NO" << endl;
            }
        }
    }
    return 0;
}
