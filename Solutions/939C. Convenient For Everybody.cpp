#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll s, f; cin >> s >> f;
    ll L = f - s, st = s - 1, sum = 0;
    for(ll j = 0; j < L; j++) sum += a[(st + j) % n];
    ll best = sum, bt = 1;
    for(ll t = 2; t <= n; t++){
        ll add = st - 1;
        if(add < 0) add += n;
        ll rem = (st + L - 1) % n;
        sum = sum - a[rem] + a[add];
        st = add;
        if(sum > best){
            best = sum;
            bt = t;
        }
    }
    cout << bt << endl;
    return 0;
}
