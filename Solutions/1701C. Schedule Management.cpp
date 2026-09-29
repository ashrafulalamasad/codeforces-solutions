#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> cnt(n + 1, 0);
        for(ll i = 0; i < m; i++){
            ll worker; cin >> worker;
            cnt[worker]++;
        }
        ll lo = 1, hi = 2 * m, answer = hi;
        while(lo <= hi){
            ll mid = (lo + hi) / 2;
            ll proficient = 0, extra = 0;
            for(ll i = 1; i <= n; i++){
                proficient += min(cnt[i], mid);
                if(cnt[i] < mid) extra += (mid - cnt[i]) / 2;
            }
            if(proficient + extra >= m){
                answer = mid;
                hi = mid - 1;
            }else lo = mid + 1;
        }
        cout << answer << endl;
    }
    return 0;
}
