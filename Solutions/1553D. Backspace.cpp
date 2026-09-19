#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s, t; cin >> s >> t;
        ll n = (ll)s.size(), m = (ll)t.size();
        ll i = n - 1, j = m - 1;
        while(i >= 0 && j >= 0){
            if(s[i] != t[j]) i = i - 2;
            else{
                i = i - 1;
                j = j - 1;
            }
        }
        if(j < 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
