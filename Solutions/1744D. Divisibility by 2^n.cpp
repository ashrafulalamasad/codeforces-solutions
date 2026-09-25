#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, total = 0; cin >> n;
        vector<ll> a(n), add;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            while(a[i] % 2 == 0){
                total++;
                a[i] /= 2;
            }
        }
        if(total >= n){
            cout << 0 << endl;
            continue;
        }
        for(ll i = 1; i <= n; i++){
            ll cnt = 0, x = i;
            while(x % 2 == 0){
                cnt++;
                x /= 2;
            }
            if(cnt > 0) add.push_back(cnt);
        }
        sort(add.rbegin(), add.rend());
        ll ops = 0;
        for(ll v : add){
            if(total >= n) break;
            total += v;
            ops++;
        }
        if(total >= n) cout << ops << endl;
        else cout << -1 << endl;
    }
    return 0;
}
