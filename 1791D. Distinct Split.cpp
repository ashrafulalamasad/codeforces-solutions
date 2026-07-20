#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s;
        cin >> n >> s;
        vector<ll> prefix(n, 0), suffix(n, 0);
        set<char> st;
        for(ll i = 0; i < n; i++){
            st.insert(s[i]);
            prefix[i] = st.size();
        }
        st.clear();
        for(ll i = n-1; i >= 0; i--){
            st.insert(s[i]);
            suffix[i] = st.size();
        }
        ll ans = 0;
        for(ll i = 0; i < n-1; i++){
            ans = max(ans, prefix[i] + suffix[i+1]);
        }
        cout << ans << endl;
    }
    return 0;
}
