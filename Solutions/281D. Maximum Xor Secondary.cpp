#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> s(n);
    for(ll i = 0; i < n; i++) cin >> s[i];
    stack<ll> st; ll ans = 0;
    for(ll i = 0; i < n; i++){
        while(!st.empty() && s[st.top()] < s[i]){
            ll j = st.top();
            st.pop();
            ans = max(ans, s[i] ^ s[j]);
        }
        if(!st.empty()){
            ans = max(ans, s[st.top()] ^ s[i]);
        }
        st.push(i);
    }
    cout << ans << endl;
    return 0;
}
