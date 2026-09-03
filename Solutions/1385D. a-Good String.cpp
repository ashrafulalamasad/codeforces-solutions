#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string s;

ll solve(ll l, ll r, ll c){
    if(r - l == 1) return s[l] - 'a' == c ? 0 : 1;
    ll mid = (l + r) / 2, cnt1 = 0, cnt2 = 0;
    for(ll i = l; i < mid; i++) if(s[i] - 'a' != c) cnt1++;
    for(ll i = mid; i < r; i++) if(s[i] - 'a' != c) cnt2++;
    return min(cnt1 + solve(mid, r, c + 1), cnt2 + solve(l, mid, c + 1));
}

int main()
{
    fast;
    tc{
        ll n; cin >> n >> s;
        cout << solve(0, n, 0) << endl;
    }
    return 0;
}
