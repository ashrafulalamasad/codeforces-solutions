#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll s; cin >> s; vector<ll> d;
        for(ll digit = 9; digit >= 1; digit--){
            if(s >= digit){
                d.push_back(digit);
                s = s - digit;
            }
        }
        sort(d.begin(), d.end()); string ans;
        for(ll i = 0; i < (ll)d.size(); i++) ans.push_back(char('0' + d[i]));
        cout << ans << endl;
    }
    return 0;
}
