#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n + 1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        vector<pair<ll, ll>> st;
        for(ll i = 1; i <= n; i++){
            ll sum = a[i];
            ll cnt = 1;
            while(st.size() > 0 && st.back().first >= sum / cnt){
                sum += st.back().first * st.back().second;
                cnt += st.back().second;
                st.pop_back();
            }
            ll avg = sum / cnt;
            ll rem = sum % cnt;
            st.push_back({avg, cnt - rem});
            if(rem != 0) st.push_back({avg + 1, rem});
        }
        ll mx = st.back().first;
        ll mn = st.front().first;
        cout << mx - mn << endl;
    }
    return 0;
}
