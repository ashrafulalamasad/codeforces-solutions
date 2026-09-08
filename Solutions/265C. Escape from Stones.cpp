#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s; ll n = s.size();
    vector<ll> res(n); ll lo = 0, hi = n - 1;
    for(ll i = 0; i < n; i++){
        if(s[i] == 'r'){
            res[lo++] = i + 1;
        }else{
            res[hi--] = i + 1;
        }
    }
    ostringstream out;
    for(ll i = 0; i < n; i++) out << res[i] << endl;
    cout << out.str();
    return 0;
}
