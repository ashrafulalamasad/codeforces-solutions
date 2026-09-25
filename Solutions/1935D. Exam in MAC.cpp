#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, c; cin >> n >> c; vector<ll> s(n);
        for(ll i = 0; i < n; i++) cin >> s[i];
        ll total = (c + 1) * (c + 2) / 2;
        ll bad1 = 0, sumHalf = 0, E = 0, O = 0;
        for(ll i = 0; i < n; i++){
            bad1 += c - s[i] + 1;
            sumHalf += s[i] / 2 + 1;
            if(s[i] % 2 == 0) E++;
            else O++;
        }
        ll bad2 = sumHalf - (E * (E + 1) / 2 + O * (O + 1) / 2);
        cout << total - bad1 - bad2 << endl;
    }
    return 0;
}
