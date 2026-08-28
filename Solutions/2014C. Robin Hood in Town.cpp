#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        ll sum = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i]; sum += a[i];
        }
        if(n <= 2){
            cout << -1 << endl;
            continue;
        }
        sort(a.begin(), a.end());
        ll need = 2 * n * a[n / 2] - sum + 1;
        cout << max(0LL, need) << endl;
    }
    return 0;
}
