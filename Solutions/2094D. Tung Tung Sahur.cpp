#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string p, s; cin >> p >> s;
        ll i = 0, j = 0; bool ok = true;
        while(i < (ll)p.size() && j < (ll)s.size()){
            if(p[i] != s[j]){
                ok = false;
                break;
            }
            ll pi = i;
            while(pi < (ll)p.size() && p[pi] == p[i]) pi++;
            ll pj = j;
            while(pj < (ll)s.size() && s[pj] == s[j]) pj++;
            ll len_p = pi - i;
            ll len_s = pj - j;
            if(len_s < len_p || len_s > 2 * len_p){
                ok = false;
                break;
            }
            i = pi; j = pj;
        }
        if(i != (ll)p.size() || j != (ll)s.size()) ok = false;
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
