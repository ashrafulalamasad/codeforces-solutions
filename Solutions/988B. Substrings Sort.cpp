#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<string> s(n);
    for(ll i = 0; i < n; i++) cin >> s[i];
    sort(s.begin(), s.end(), [](const string& u, const string& v){
        return (ll)u.size() < (ll)v.size();
    });
    bool ok = true;
    for(ll i = 0; i + 1 < n; i++) if(s[i + 1].find(s[i]) == string::npos) ok = false;
    if(!ok) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        for(ll i = 0; i < n; i++) cout << s[i] << endl;
    }
    return 0;
}
