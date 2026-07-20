#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, vb, vs; cin >> n >> vb >> vs;
    vector<ll> x(n);
    for(auto& xi : x) cin >> xi;
    ll xu, yu; cin >> xu >> yu;
    ll best_idx = 1;
    long double best_time = 1e18;
    for(ll i = 1; i < n; i++){
        long double bus_time = (long double)x[i] / vb;
        long double dx = xu - x[i], dy = yu;
        long double run_time = sqrt(dx*dx + dy*dy) / vs;
        long double total = bus_time + run_time;
        if(total < best_time - 1e-9 || (fabsl(total - best_time) < 1e-9 && sqrt((x[i]-xu)*(x[i]-xu) + (long double)yu*yu) < sqrt((x[best_idx]-xu)*(x[best_idx]-xu) + (long double)yu*yu))){
            best_time = total;
            best_idx = i;
        }
    }
    cout << best_idx + 1 << endl;
    return 0;
}
