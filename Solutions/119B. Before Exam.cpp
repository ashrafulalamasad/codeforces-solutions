#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll m = n / k, q; cin >> q;
    vector<bool> used(n, false);
    set<vector<ll>> seen;
    double mn = 1e18, mx = -1e18;
    for(ll i = 0; i < q; i++){
        vector<ll> card(m); double sum = 0;
        for(ll j = 0; j < m; j++){
            cin >> card[j];
            card[j]--;
            used[card[j]] = true;
            sum += a[card[j]];
        }
        sort(card.begin(), card.end());
        if(seen.count(card)) continue;
        seen.insert(card);
        double avg = sum / m;
        if(avg < mn) mn = avg;
        if(avg > mx) mx = avg;
    }
    if((ll)seen.size() < k){
        vector<ll> rest;
        for(ll i = 0; i < n; i++) if(!used[i]) rest.push_back(a[i]);
        sort(rest.begin(), rest.end());
        double smin = 0, smax = 0;
        for(ll i = 0; i < m; i++){
            smin += rest[i];
            smax += rest[rest.size() - 1 - i];
        }
        double avgMin = smin / m, avgMax = smax / m;
        if(avgMin < mn) mn = avgMin;
        if(avgMax > mx) mx = avgMax;
    }
    cout << fixed << setprecision(10) << mn << " " << mx << endl;
    return 0;
}
