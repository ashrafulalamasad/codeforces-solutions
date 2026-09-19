#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll k, n, m; cin >> k >> n >> m;
        vector<ll> a(n), b(m), ans;
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < m; i++) cin >> b[i];
        ll i = 0, j = 0, lines = k; bool ok = true;
        while(i < n || j < m){
            if(i < n && a[i] == 0){
                ans.push_back(a[i]);
                lines++; i++;
            }else if(j < m && b[j] == 0){
                ans.push_back(b[j]);
                lines++; j++;
            }else if(i < n && a[i] <= lines){
                ans.push_back(a[i]); i++;
            }else if(j < m && b[j] <= lines){
                ans.push_back(b[j]); j++;
            }else ok = false;
            if(!ok) break;
        }
        if(ok){
            for(ll x : ans) cout << x << " ";
            cout << endl;
        }else cout << -1 << endl;
    }
    return 0;
}
