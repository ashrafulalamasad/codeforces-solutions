#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m = 0; cin >> n; vector<ll> a(n), has(n + 1, 0);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) if(a[i] <= n) has[a[i]] = 1;
        while(has[m]) m++;
        if(m == 0){
            cout << 2 << endl;
            cout << 1 << " " << 1 << endl;
            cout << 2 << " " << n << endl;
            continue;
        }
        vector<ll> preOK(n + 1, 0), sufOK(n + 2, 0), seen(m, 0);
        ll need = m;
        for(ll i = 1; i <= n; i++){
            if(a[i - 1] < m && !seen[a[i - 1]]){
                seen[a[i - 1]] = 1;
                need--;
            }
            if(need == 0) preOK[i] = 1;
        }
        fill(seen.begin(), seen.end(), 0);
        need = m;
        for(ll i = n; i >= 1; i--){
            if(a[i - 1] < m && !seen[a[i - 1]]){
                seen[a[i - 1]] = 1;
                need--;
            }
            if(need == 0) sufOK[i] = 1;
        }
        ll cut = -1;
        for(ll p = 1; p < n; p++){
            if(preOK[p] && sufOK[p + 1]){
                cut = p;
                break;
            }
        }
        if(cut == -1) cout << -1 << endl;
        else{
            cout << 2 << endl;
            cout << 1 << " " << cut << endl;
            cout << cut + 1 << " " << n << endl;
        }
    }
    return 0;
}
