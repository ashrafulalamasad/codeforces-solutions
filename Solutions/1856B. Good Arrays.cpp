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
        ll sum = 0, ones = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        for(ll i = 0; i < n; i++){
            if(a[i] == 1) ones++;
        }
        if(n == 1) cout << "NO" << endl;
        else if(sum < n + ones) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
