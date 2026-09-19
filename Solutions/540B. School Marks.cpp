#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k, p, x, y , sum = 0; cin >> n >> k >> p >> x >> y;
    vector<ll> a(k);
    for(ll i = 0; i < k; i++) cin >> a[i];
    for(ll i = 0; i < k; i++) sum = sum + a[i];
    ll need = (n + 1) / 2, cnt = 0;
    for(ll i = 0; i < k; i++){
        if(a[i] >= y){
            cnt++;
        }
    }
    ll m = n - k, deficit = need - cnt;
    if(deficit < 0) deficit = 0;
    if(deficit > m){
        cout << -1 << endl;
        return 0;
    }
    ll add = deficit * y + (m - deficit) * 1;
    if(sum + add > x){
        cout << -1 << endl;
        return 0;
    }
    for(ll i = 0; i < deficit; i++){
        cout << y << " ";
    }
    for(ll i = 0; i < m - deficit; i++){
        cout << 1 << " ";
    }
    cout << endl;
    return 0;
}
