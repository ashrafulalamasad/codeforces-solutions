#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc {
        ll n, s; cin >> n >> s;
        ll maxSum = n * (n + 1) / 2;
        if(s > maxSum){
            cout << -1 << endl;
            continue;
        }
        vector<ll> ans;
        for(ll i = n; i >= 1; i--){
            if(i <= s){
                ans.push_back(i);
                s -= i;
            }
        }
        cout << ans.size();
        for(ll x : ans) cout << ' ' << x;
        cout << endl;
    }
    return 0;
}
