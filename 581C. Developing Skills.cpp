#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    ll sum = 0;
    vector<ll> need;
    for(ll i=0; i<n; i++){
        cin >> a[i];
        sum += a[i] / 10;
        if(a[i] % 10) need.push_back(10 - a[i] % 10);
    }
    sort(need.begin(), need.end());
    for(ll x : need){
        if(k >= x){
            k -= x;
            sum++;
        }
    }
    sum += min(k / 10, 10 * n - sum);
    cout << sum << endl;
    return 0;
}
