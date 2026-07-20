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
        vector<ll> freq(26,0);
        for(char c: s) freq[c - 'a']++;
        ll cnt2 = 0, cnt1 = 0;
        for(ll f: freq){
            if(f >= 2) cnt2++;
            else if(f == 1) cnt1++;
        }
        ll k = cnt2 + cnt1/2;
        cout << k << endl;
    }
    return 0;
}
