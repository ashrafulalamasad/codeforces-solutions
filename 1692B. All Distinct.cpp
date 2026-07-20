#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        set<ll> st;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            st.insert(x);
        }
        ll d = st.size();
        if((n - d) % 2 == 0)
            cout << d << endl;
        else
            cout << d-1 << endl;
    }
    return 0;
}
