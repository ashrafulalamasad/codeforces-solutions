#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), odd, even;
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++){
            if(a[i] % 2 == 1) odd.push_back(a[i]);
            else even.push_back(a[i]);
        }
        sort(odd.begin(), odd.end());
        sort(even.rbegin(), even.rend());
        vector<ll> prefeven(even.size() + 1, 0);
        for(ll i = 0; i < (ll)even.size(); i++) prefeven[i + 1] = prefeven[i] + even[i];
        ll odd1 = 1, even1 = 0;
        if(odd.size() == 0){
            odd1 = 0; even1 = 1;
        }
        for(ll k = 1; k <= n; k++){
            if(k > 1){
                if(even1 < (ll)even.size()) even1++;
                else if(odd1 + 2 <= (ll)odd.size() && even1 > 0){
                    odd1 += 2; even1--;
                }
                else odd1++;
            }
            if(odd1 % 2 == 1) cout << odd.back() + prefeven[even1] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}
