#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> even, odd;
        for(ll i = 0; i < n; i++){
            ll value; cin >> value;
            if(value % 2 == 0) even.push_back(value);
            else odd.push_back(value);
        }
        for(ll value : even) cout << value << " ";
        for(ll value : odd) cout << value << " ";
        cout << endl;
    }
    return 0;
}
