#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    for(ll i = 0; i < n / 2; i++)
        for(ll j = 0; j < m; j++){
            cout << i + 1 << " " << j + 1 << endl;
            cout << n - i << " " << m - j << endl;
        }
    if(n % 2 == 1){
        ll x = n / 2;
        cout << x + 1 << " " << 1 << endl;
        deque<ll> have;
        for(ll i = 1; i < m; i++) have.push_back(i);
        while(!have.empty()){
            cout << x + 1 << " " << have.back() + 1 << endl;
            have.pop_back();
            if(!have.empty()){
                cout << x + 1 << " " << have.front() + 1 << endl;
                have.pop_front();
            }
        }
    }
    return 0;
}
