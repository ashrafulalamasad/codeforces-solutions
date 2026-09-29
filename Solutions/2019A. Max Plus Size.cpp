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
        ll maximum = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            maximum = max(maximum, a[i]);
        }
        ll answer = maximum + (n + 1) / 2;
        if(n % 2 == 1){
            bool odd = false;
            for(ll i = 0; i < n; i++) if(a[i] == maximum && i % 2 == 0) odd = true;
            if(!odd) answer--;
        }
        cout << answer << endl;
    }
    return 0;
}
