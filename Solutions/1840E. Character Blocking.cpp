#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s1, s2; cin >> s1 >> s2;
        ll t, q; cin >> t >> q;
        ll n = s1.size(), bad = 0;
        for(ll i = 0; i < n; i++){
            if(s1[i] != s2[i]) bad++;
        }
        vector<ll> until(n, 0);
        queue<ll> blocked;
        for(ll qi = 1; qi <= q; qi++){
            ll type; cin >> type;
            while(!blocked.empty() && until[blocked.front()] < qi){
                ll p = blocked.front();
                blocked.pop();
                if(s1[p] != s2[p]) bad++;
            }
            if(type == 1){
                ll pos; cin >> pos;
                pos--;
                until[pos] = qi + t - 1;
                blocked.push(pos);
                if(s1[pos] != s2[pos]) bad--;
            }else if(type == 2){
                ll w1, p1, w2, p2; cin >> w1 >> p1 >> w2 >> p2;
                p1--; p2--;
                string& a = (w1 == 1 ? s1 : s2);
                string& b = (w2 == 1 ? s1 : s2);
                vector<ll> aff;
                aff.push_back(p1);
                if(p2 != p1) aff.push_back(p2);
                for(ll p : aff){
                    if(s1[p] != s2[p]) bad--;
                }
                if(!(w1 == w2 && p1 == p2)){
                    char c1 = a[p1], c2 = b[p2];
                    a[p1] = c2;
                    b[p2] = c1;
                }
                for(ll p : aff){
                    if(s1[p] != s2[p]) bad++;
                }
            }else{
                if(bad == 0) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
    }
    return 0;
}
