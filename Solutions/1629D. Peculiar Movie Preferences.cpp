#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; set<string> seen;
        bool ok = false;
        for(ll i = 0; i < n; i++){
            string s; cin >> s;
            string r(s.rbegin(), s.rend());
            if(s == r || seen.count(r)) ok = true;
            if(s.size() == 3 && seen.count(string(1, s[2]) + s[1])) ok = true;
            if(s.size() == 2){
                for(char c = 'a'; c <= 'z'; c++){
                    if(seen.count(r + c)) ok = true;
                }
            }
            seen.insert(s);
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
