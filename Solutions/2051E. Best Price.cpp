#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n), b(n), prices;
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        vector<ll> sorted_a = a, sorted_b = b;
        sort(sorted_a.begin(), sorted_a.end());
        sort(sorted_b.begin(), sorted_b.end());
        prices = a;
        prices.insert(prices.end(), b.begin(), b.end());
        sort(prices.begin(), prices.end());
        prices.erase(unique(prices.begin(), prices.end()), prices.end());
        ll answer = 0;
        for(ll price : prices){
            ll buyers = sorted_b.end() - lower_bound(sorted_b.begin(), sorted_b.end(), price);
            ll positive = sorted_a.end() - lower_bound(sorted_a.begin(), sorted_a.end(), price);
            ll negative = buyers - positive;
            if(negative <= k){
                answer = max(answer, price * buyers);
            }
        }
        cout << answer << endl;
    }
    return 0;
}
