#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int main()
{
    fast;
    tc{
        ll n, s, x; cin >> n >> s >> x; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll answer = 0, i = 0;
        while(i < n){
            if(a[i] > x){ i++; continue; }
            ll total = 0, zero_x = 0, pref_total = 0, pref_no = 0;
            unordered_map<ll,ll,custom_hash> mp_total, mp_no;
            mp_total[0] = 1; mp_no[0] = 1;
            while(i < n && a[i] <= x){
                ll v = a[i];
                pref_total += v;
                auto it = mp_total.find(pref_total - s);
                if(it != mp_total.end()) total += it->second;
                mp_total[pref_total]++;
                if(v < x){
                    pref_no += v;
                    auto it2 = mp_no.find(pref_no - s);
                    if(it2 != mp_no.end()) zero_x += it2->second;
                    mp_no[pref_no]++;
                } else {
                    pref_no = 0;
                    mp_no.clear(); mp_no[0] = 1;
                }
                i++;
            }
            answer += total - zero_x;
        }
        cout << answer << endl;
    }
    return 0;
}
