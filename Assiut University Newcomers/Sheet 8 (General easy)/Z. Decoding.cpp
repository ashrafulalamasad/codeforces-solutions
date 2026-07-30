#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; string s; cin >> n >> s;
    string ans;
    for(ll i = n - 1; i >= 0; i--){
        ans.insert(ans.size() / 2, 1, s[i]);
    }
    cout << ans << endl;
    return 0;
}
