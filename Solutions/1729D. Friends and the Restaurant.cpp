#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> x(n), d(n);
        for(ll i = 0; i < n; i++) cin >> x[i];
        for(ll i = 0; i < n; i++){
            ll y; cin >> y; d[i] = y - x[i];
        }
        sort(d.begin(), d.end());
        ll l = 0, r = n - 1, cnt = 0;
        while(l < r){
            if(d[l] + d[r] >= 0){
                cnt++; l++; r--;
            }else{
                l++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
