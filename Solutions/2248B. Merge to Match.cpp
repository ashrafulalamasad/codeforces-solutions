#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> a(n), b(m);
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < m; i++) cin >> b[i];
        if(n < m){
            cout << "NO" << endl;
            continue;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        bool bad = false;
        for(ll i = 0; i < m; i++){
            if(a[i] > b[i] || a[n - m + i] < b[i]){
                bad = true;
                break;
            }
        }
        if(bad){
            cout << "NO" << endl;
            continue;
        }
        ll common = 0;
        ll i = 0, j = 0;
        while(i < n && j < m){
            if(a[i] == b[j]){
                common++;
                i++;
                j++;
            }else if(a[i] < b[j]){
                i++;
            }else{
                j++;
            }
        }
        ll k = max(0LL, 2 * m - n);
        if(common >= k){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
