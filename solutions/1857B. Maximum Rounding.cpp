#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc {
        string x; cin >> x;
        ll n = x.size();
        string s(x.rbegin(), x.rend());
        ll zeroUpTo = -1;
        ll i = 0;
        while(i < n) {
            if(s[i] >= '5') {
                ll j = i + 1;
                while(j < n && s[j] == '9') j++;
                if(j == n) { s.push_back('1'); n++; }
                else s[j]++;
                zeroUpTo = j - 1;
                i = j;
            } else {
                i++;
            }
        }
        for(ll k = 0; k <= zeroUpTo; k++) s[k] = '0';
        cout << string(s.rbegin(), s.rend()) << endl;
    }
    return 0;
}
