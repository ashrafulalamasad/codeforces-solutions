#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, p; cin >> n >> p; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end()); vector<ll> answer;
    for(ll x = 1; x <= a[n - 1]; x++){
        bool valid = true;
        for(ll i = 0; i < n; i++){
            ll choices = upper_bound(a.begin(), a.end(), x + i) - a.begin() - i;
            if(choices <= 0 || choices % p == 0){
                valid = false;
                break;
            }
        }
        if(valid) answer.push_back(x);
    }
    cout << answer.size() << endl;
    for(ll x : answer) cout << x << " ";
    cout << endl;
    return 0;
}
