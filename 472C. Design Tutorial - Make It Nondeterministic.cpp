#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<pair<string,string>> ppl(n);
    for(auto& [f,s] : ppl) cin >> f >> s;
    vector<ll> p(n);
    for(auto& x : p) { cin >> x; x--; }
    vector<string> chosen(n, "");
    string prev = "";
    bool ok = true;
    for(ll i = 0; i < n; i++){
        ll idx = p[i];
        string f = ppl[idx].first, s = ppl[idx].second;
        string best = "";
        for(string h : {f, s}){
            if(h > prev){
                if(best.empty() || h < best) best = h;
            }
        }
        if(best.empty()){ ok = false; break; }
        chosen[idx] = best;
        prev = best;
    }
    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}
