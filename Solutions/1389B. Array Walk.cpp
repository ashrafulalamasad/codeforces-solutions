#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, z; cin >> n >> k >> z; vector<ll> a(n), prefix(n), bestPair(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        prefix[0] = a[0];
        for(ll i = 1; i < n; i++) prefix[i] = prefix[i - 1] + a[i];
        for(ll i = 1; i < n; i++) bestPair[i] = max(bestPair[i - 1], a[i - 1] + a[i]);
        ll answer = prefix[k];
        for(ll left = 1; left <= min(z, k / 2); left++){
            ll endpoint = k - 2 * left;
            if(endpoint >= 1){
                answer = max(answer, prefix[endpoint] + left * bestPair[endpoint]);
            }
            answer = max(answer, prefix[endpoint + 1] + a[endpoint] + (left - 1) * bestPair[endpoint + 1]);
        }
        cout << answer << endl;
    }
    return 0;
}
