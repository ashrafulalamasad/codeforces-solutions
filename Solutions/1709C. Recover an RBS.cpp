#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        ll n = (ll)s.size();
        ll cntOpen = 0, cntQ = 0, seen = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] == '(') cntOpen = cntOpen + 1;
            else if(s[i] == '?') cntQ = cntQ + 1;
        }
        ll need = n / 2 - cntOpen;
        string t = s;
        for(ll i = 0; i < n; i++){
            if(s[i] == '?'){
                if(seen < need) t[i] = '(';
                else t[i] = ')';
                seen = seen + 1;
            }
        }
        if(need == 0 || need == cntQ) cout << "YES" << endl;
        else{
            ll posL = -1, posR = -1;
            for(ll i = 0; i < n; i++){
                if(s[i] == '?' && t[i] == '(') posL = i;
                if(s[i] == '?' && t[i] == ')' && posR == -1) posR = i;
            }
            vector<ll> pref(n + 1, 0);
            for(ll i = 0; i < n; i++){
                if(t[i] == '(') pref[i + 1] = pref[i] + 1;
                else pref[i + 1] = pref[i] - 1;
            }
            ll minBal = pref[posL + 1];
            for(ll i = posL + 1; i <= posR; i++){
                if(pref[i] < minBal) minBal = pref[i];
            }
            if(minBal >= 2) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0;
}
